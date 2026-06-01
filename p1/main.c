#include <stdio.h>

int main(void)
{
    char arr[10] = {}; // 10개의 영문자 입력받을 배열선언
    scanf("%s", arr); //문자를 입력받는데 arr를 
    
    char max_char = *arr; //가장 많이 나타난 문자는 arr가 가리키는 값에서 가져온다.
    int max_count = 0; // 빈도수는 초기화 먼저~
    
    for(char *p=arr; p<arr; p++){ //포인터의 값은 배열의 첫번째 문자, p가 arr보다 작을동안 아래 for문 돌리고 포인터 이동
        int current_count = 0;
        
        for(char *q = arr; q < arr+10; q++){ // 
            if(*p == *q) {
                current_count++;
            }
        }
        
        if(current_count > max_count){
        max_count = current_count;
        max_char = *p;
        }
    }
    printf("%c %d\n", max_char,max_count);

    return 0;
}
