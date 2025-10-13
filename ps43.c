#include <stdio.h>

// ===== 函式原型 =====
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int linearSearch(int arr[], int n, int key);
int binarySearch(int arr[], int left, int right, int key);

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    // ===== 在這裡自由測試你寫的函式 =====
    // 例如：
    bubbleSort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);
    // int pos = linearSearch(arr, n, 5);
    // int pos = binarySearch(arr, 0, n - 1, 5);


    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

// ===== 以下區塊由學生實作 =====

// 氣泡排序
void bubbleSort(int arr[], int n) {
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int x;
                x=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=x;
            }
        }
    }
    
}

// 選擇排序
void selectionSort(int arr[], int n) {
    // your code here
}

// 插入排序
void insertionSort(int arr[], int n) {
    // your code here
}

// 線性搜尋
int linearSearch(int arr[], int n, int key) {
    // your code here
    return -1;
}

// 二分搜尋
int binarySearch(int arr[], int left, int right, int key) {
    // your code here
    return -1;
}