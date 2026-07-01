#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// =========================================================================
// LECTURE 1 & 2: BASIC FLOW & DATA TYPES
// Question: Take two numbers from the user and print their sum.
// =========================================================================
void basicSumDemo()
{
    cout << "--- Lecture 1 & 2: Basic Sum ---" << endl;
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;
    cout << "The sum is: " << sum << endl
         << endl;
}

// =========================================================================
// LECTURE 3: CONDITIONAL STATEMENTS & LOOPS
// Question: Check if a number given by the user is prime or not.
// =========================================================================
void checkPrimeDemo()
{
    cout << "--- Lecture 3: Prime Number Check ---" << endl;
    int n;
    cout << "Enter a number to check prime: ";
    cin >> n;

    if (n <= 1)
    {
        cout << n << " is not a prime number." << endl
             << endl;
        return;
    }

    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    cout << endl;
}

// =========================================================================
// LECTURE 4: PATTERN PROBLEMS
// Question: Print a simple star square pattern of size N x N.
// =========================================================================
void printPatternDemo()
{
    cout << "--- Lecture 4: Pattern Printing ---" << endl;
    int n = 4;
    cout << "Printing a " << n << "x" << n << " star pattern:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

// =========================================================================
// LECTURE 5: FUNCTIONS
// Question: Write a function to calculate the factorial of a number.
// =========================================================================
int calculateFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void factorialDemo()
{
    cout << "--- Lecture 5: Functions (Factorial) ---" << endl;
    int num = 5;
    cout << "Factorial of " << num << " is: " << calculateFactorial(num) << endl
         << endl;
}

// =========================================================================
// LECTURE 6: BINARY NUMBER SYSTEM
// Question: Convert a decimal number to its binary representation.
// =========================================================================
void decimalToBinaryDemo()
{
    cout << "--- Lecture 6: Decimal to Binary ---" << endl;
    int decimalNum = 13;
    int original = decimalNum;
    int binaryNum = 0;
    int placeValue = 1;

    while (decimalNum > 0)
    {
        int remainder = decimalNum % 2;
        binaryNum = binaryNum + (remainder * placeValue);
        placeValue = placeValue * 10;
        decimalNum = decimalNum / 2;
    }

    cout << "Binary of " << original << " is: " << binaryNum << endl
         << endl;
}

// =========================================================================
// LECTURE 7: BITWISE OPERATORS
// Question: Check if a given number is even or odd using bitwise AND (&).
// =========================================================================
void bitwiseEvenOddDemo()
{
    cout << "--- Lecture 7: Bitwise Even/Odd Check ---" << endl;
    int n = 7;

    // If the least significant bit is 1, the number is odd
    if ((n & 1) == 1)
    {
        cout << n << " is Odd (checked via Bitwise AND)." << endl;
    }
    else
    {
        cout << n << " is Even (checked via Bitwise AND)." << endl;
    }
    cout << endl;
}

// =========================================================================
// LECTURE 8: ARRAY DATA STRUCTURE (PART 1)
// Question: Find the smallest and largest element in an array.
// =========================================================================
void minMaxArrayDemo()
{
    cout << "--- Lecture 8: Min and Max in Array ---" << endl;
    int arr[] = {5, 2, 9, 1, 6};
    int size = 5;

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    cout << "Smallest element: " << minVal << endl;
    cout << "Largest element: " << maxVal << endl
         << endl;
}

// =========================================================================
// LECTURE 9: VECTORS IN C++ (ARRAYS PART 2)
// Question: Reverse a vector using standard vector operations.
// =========================================================================
void reverseVectorDemo()
{
    cout << "--- Lecture 9: Reversing a Vector ---" << endl;
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    for (int val : vec)
        cout << val << " ";
    cout << endl;

    int start = 0;
    int end = vec.size() - 1;

    while (start < end)
    {
        // Swap elements
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed vector: ";
    for (int val : vec)
        cout << val << " ";
    cout << endl
         << endl;
}

// =========================================================================
// LECTURE 10: KADANE'S ALGORITHM (MAXIMUM SUBARRAY SUM)
// Question: Find the maximum sum of a contiguous subarray.
// =========================================================================
void kadanesAlgorithmDemo()
{
    cout << "--- Lecture 10: Kadane's Algorithm ---" << endl;
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = 9;

    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < size; i++)
    {
        // Decide whether to add current element to existing subarray or start fresh
        if (arr[i] > curr_max + arr[i])
        {
            curr_max = arr[i];
        }
        else
        {
            curr_max = curr_max + arr[i];
        }

        if (curr_max > max_so_far)
        {
            max_so_far = curr_max;
        }
    }

    cout << "Maximum subarray sum is: " << max_so_far << endl
         << endl;
}

// =========================================================================
// LECTURE 11: MAJORITY ELEMENT (MOORE'S VOTING ALGORITHM) & PAIR SUM
// Question: Find the element that appears more than N/2 times in an array.
// =========================================================================
void majorityElementDemo()
{
    cout << "--- Lecture 11: Moore's Voting Algorithm ---" << endl;
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int size = 7;

    int candidate = arr[0];
    int count = 1;

    // Phase 1: Find a candidate
    for (int i = 1; i < size; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Phase 2: Verify candidate (simplified for beginner presentation)
    cout << "The majority element is: " << candidate << endl
         << endl;
}

// =========================================================================
// LECTURE 12: TIME & SPACE COMPLEXITY
// Note: This topic is conceptual. Big-O complexities are marked in comments.
// =========================================================================

// =========================================================================
// LECTURE 13: BUY AND SELL STOCK PROBLEM & POW(X, N)
// Question 1: Find the max profit you can make by buying/selling a stock.
// Question 2: Implement basic power function Pow(x, n) using loop/recursion logic.
// =========================================================================
void buySellStockDemo()
{
    cout << "--- Lecture 13: Buy and Sell Stock ---" << endl;
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = 6;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            int currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit)
            {
                maxProfit = currentProfit;
            }
        }
    }
    cout << "Max Stock Profit possible: " << maxProfit << endl;
}

double myPow(double x, int n)
{
    double ans = 1.0;
    long long nn = n;
    if (nn < 0)
        nn = -1 * nn;

    while (nn > 0)
    {
        if (nn % 2 == 1)
        {
            ans = ans * x;
            nn = nn - 1;
        }
        else
        {
            x = x * x;
            nn = nn / 2;
        }
    }
    if (n < 0)
        ans = (double)(1.0) / (double)(ans);
    return ans;
}

void powerDemo()
{
    cout << "Pow(2.0, 10) = " << myPow(2.0, 10) << endl
         << endl;
}

// =========================================================================
// LECTURE 14: CONTAINER WITH MOST WATER (BRUTE TO OPTIMAL)
// Question: Find two lines that together with the x-axis forms a container containing the most water.
// =========================================================================
void maxWaterDemo()
{
    cout << "--- Lecture 14: Container With Most Water ---" << endl;
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = 9;

    int left = 0;
    int right = size - 1;
    int maxWater = 0;

    while (left < right)
    {
        // Calculate current container width
        int width = right - left;

        // Find limiting container height
        int currentHeight;
        if (height[left] < height[right])
        {
            currentHeight = height[left];
        }
        else
        {
            currentHeight = height[right];
        }

        int currentWater = width * currentHeight;
        if (currentWater > maxWater)
        {
            maxWater = currentWater;
        }

        // Move pointers inward based on smaller height
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "Max Water Container Area: " << maxWater << endl
         << endl;
}

// =========================================================================
// LECTURE 15: PRODUCT OF ARRAY EXCEPT SELF
// Question: Return an array such that output[i] is equal to product of all elements except nums[i].
// =========================================================================
void productExceptSelfDemo()
{
    cout << "--- Lecture 15: Product of Array Except Self ---" << endl;
    int nums[] = {1, 2, 3, 4};
    int n = 4;
    int output[4];

    // Step 1: Compute prefix products
    output[0] = 1;
    for (int i = 1; i < n; i++)
    {
        output[i] = output[i - 1] * nums[i - 1];
    }

    // Step 2: Compute suffix products on the fly
    int suffixProduct = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        output[i] = output[i] * suffixProduct;
        suffixProduct = suffixProduct * nums[i];
    }

    cout << "Product except self result: ";
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }
    cout << endl
         << endl;
}

// =========================================================================
// LECTURE 16: POINTERS IN C++
// Question: Show how pointers store addresses and modify variables indirectly.
// =========================================================================
void pointersDemo()
{
    cout << "--- Lecture 16: Pointers Basic Demo ---" << endl;
    int a = 10;
    int *ptr = &a; // Pointer stores the memory address of variable a

    cout << "Value of a: " << a << endl;
    cout << "Address of a stored in ptr: " << ptr << endl;
    cout << "Value accessed through pointer: " << *ptr << endl;

    // Modifying variable through the pointer dereference
    *ptr = 25;
    cout << "New value of a after changing via *ptr: " << a << endl
         << endl;
}

// =========================================================================
// LECTURE 17: BINARY SEARCH ALGORITHM (ITERATIVE & RECURSIVE)
// Question: Search for a target value inside a sorted integer array.
// =========================================================================
int binarySearchIterative(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Prevents integer overflow

        if (arr[mid] == target)
        {
            return mid; // Target index found
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1; // Target not found
}

void binarySearchDemo()
{
    cout << "--- Lecture 17: Binary Search ---" << endl;
    int sortedArr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = 7;
    int target = 10;

    int resultIndex = binarySearchIterative(sortedArr, size, target);
    if (resultIndex != -1)
    {
        cout << "Target element " << target << " found at index: " << resultIndex << endl;
    }
    else
    {
        cout << "Target element not found." << endl;
    }
    cout << endl;
}

// =========================================================================
// LECTURE 18: SEARCH IN ROTATED SORTED ARRAY
// Question: Find target position inside an array that was sorted and then rotated.
// =========================================================================
int searchInRotatedArray(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;

        // Check if left half is correctly sorted
        if (arr[start] <= arr[mid])
        {
            if (target >= arr[start] && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // Otherwise right half must be sorted
        else
        {
            if (target > arr[mid] && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

void rotatedArrayDemo()
{
    cout << "--- Lecture 18: Search in Rotated Sorted Array ---" << endl;
    int rotatedArr[] = {4, 5, 6, 7, 0, 1, 2};
    int size = 7;
    int target = 0;

    int index = searchInRotatedArray(rotatedArr, size, target);
    cout << "Target " << target << " found at index: " << index << endl
         << endl;
}

// =========================================================================
// LECTURE 19: PEAK INDEX IN MOUNTAIN ARRAY
// Question: Find the index containing the highest value in an array that increases then decreases.
// =========================================================================
void peakIndexMountainDemo()
{
    cout << "--- Lecture 19: Peak Index in Mountain Array ---" << endl;
    int mountain[] = {0, 2, 4, 5, 3, 1};
    int size = 6;

    int start = 0;
    int end = size - 1;
    int peakIndex = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // If mid element is smaller than the next, peak lies to the right
        if (mountain[mid] < mountain[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            // This mid could be the potential peak
            peakIndex = mid;
            end = mid - 1;
        }
    }
    cout << "Peak element value is at index: " << peakIndex << " (Value: " << mountain[peakIndex] << ")" << endl
         << endl;
}

// =========================================================================
// LECTURE 20: SINGLE ELEMENT IN SORTED ARRAY
// Question: Every element appears twice except one. Find that single unique element.
// =========================================================================
void singleElementDemo()
{
    cout << "--- Lecture 20: Single Element in Sorted Array ---" << endl;
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int size = 9;

    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        // Ensure mid calculation checks pair balance consistency
        if (mid % 2 == 1)
        {
            mid--; // Move mid backward to always check starting pairs at an even index
        }

        // If the partner element matches, the single element lies further right
        if (arr[mid] == arr[mid + 1])
        {
            start = mid + 2;
        }
        else
        {
            end = mid;
        }
    }
    cout << "The unique single element is: " << arr[start] << endl
         << endl;
}

// =========================================================================
// MAIN FUNCTION
// Runs all demonstrations back-to-back
// =========================================================================
int main()
{
    cout << "=========================================" << endl;
    cout << "    C++ DATA STRUCTURES & ALGORITHMS     " << endl;
    cout << "=========================================" << endl
         << endl;

    // Basic Input/Output and Loops
    basicSumDemo();
    checkPrimeDemo();
    printPatternDemo();
    factorialDemo();

    // Number Systems and Bitwise
    decimalToBinaryDemo();
    bitwiseEvenOddDemo();

    // Array Basics and Intermediate Problems
    minMaxArrayDemo();
    reverseVectorDemo();
    kadanesAlgorithmDemo();
    majorityElementDemo();

    // Math, Vectors and Multi-Pointer techniques
    buySellStockDemo();
    powerDemo();
    maxWaterDemo();
    productExceptSelfDemo();

    // Pointers and Binary Search variants
    pointersDemo();
    binarySearchDemo();
    rotatedArrayDemo();
    peakIndexMountainDemo();
    singleElementDemo();

    cout << "=========================================" << endl;
    cout << "       All exercises completed!          " << endl;
    cout << "=========================================" << endl;

    return 0;
}