#include <stdio.h>
 
#define n 6
 
int main() {
 
    int arr[n] = { 67,33,15,88,69,5 };
    int min, temp;
 
    //배열 요소의 수 -1 만큼 반복
    for (int i = 0; i < n-1;i++) {
        min = i;
        //정렬과정 출력
        printf("%d회전 결과 : ",i);
        for (int i = 0; i < n; i++) {
            printf("[%d] ", arr[i]);
        }
        printf("\n");
        //i번째와 비교화여 더 작은 값이 있다면 min수정
        for (int j = i + 1; j < n;j++) {
            if (arr[j]<arr[i]) {
                min = j;
            }
        }
        // min이 변경되었다면 자리 교환
        if (i != min) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    
    //최종 결과 출력
    printf("%d회전 결과 : ",n-1);
    for (int i = 0; i < n; i++) {
        printf("[%d] ", arr[i]);
    }
    
    return 0;
}
