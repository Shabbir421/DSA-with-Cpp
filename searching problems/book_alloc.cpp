#include <iostream>
using namespace std;

// Helper function to check if the books can be allocated with a maximum limit of pages
bool isPossible(int arr[], int n, int m, int curr_min) {
    int studentsRequired = 1, curr_sum = 0;

    for (int i = 0; i < n; i++) {
        // If a single book has more pages than curr_min, allocation is not possible
        if (arr[i] > curr_min) 
            return false;

        // Accumulate pages for the current student
        curr_sum += arr[i];

        // If adding the next book exceeds the current minimum limit, allocate to a new student
        if (curr_sum > curr_min) {
            studentsRequired++;
            curr_sum = arr[i]; // Start new allocation with the current book
        }

        // If more students are required than available, return false
        if (studentsRequired > m)
            return false;
    }
    return true;
}

int findPages(int arr[], int n, int m) {
    if (n < m) return -1; // Not enough books for students

    int sum = 0, max_page = arr[0];

    // Calculate the total number of pages and find the maximum single book page
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max_page) max_page = arr[i];
    }

    // Binary search between the maximum page and total sum of pages
    int start = max_page, end = sum, result = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if it's possible to allocate books with the current mid as the max page limit
        if (isPossible(arr, n, m, mid)) {
            result = mid;  // If possible, store the result and try for a smaller number
            end = mid - 1;
        } else {
            start = mid + 1; // Try for a larger number
        }
    }
    return result;
}

int main() {
    int arr[] = {12, 34, 67, 90}; // Number of pages in books
    int n = sizeof(arr) / sizeof(arr[0]); // Number of books
    int m = 2; // Number of students

    int result = findPages(arr, n, m);
    if (result != -1)
        cout << "The minimum number of pages a student can get is " << result << endl;
    else
        cout << "Book allocation not possible" << endl;

    return 0;
}
