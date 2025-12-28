#include <stdio.h>
#include <string.h>

int binarySearch(int array[], int size, int target)
{
    // definir low e high
    // enquanto low <= high
    // calcular mid
    // comparar array[mid] com target

}

// int n --> How many numbers will be read
// int arr[] --> Where the numbers will be stored
void saveNumbers(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// int j --> Current element
void organizeNumbers(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++) // n - 1 - i --> Avoids comparing numbers already ordened
        {
            if (arr[j] > arr[j + 1]) // if current is greater then next one
            {
                int temp = arr[j]; // Temporary variable to store current element
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArr(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int n;
    printf("Enter how many elements: ");
    scanf("%d", &n);

    int arr[100];

    saveNumbers(n, arr);
    organizeNumbers(n, arr);
    printArr(n, arr);

    printf("\nMenor: %d\n", arr[0]);
    printf("Maior: %d\n", arr[n - 1]);

    return 0;
}