 #include <stdio.h>
 #include <string.h>
 int main(void) { 
  int i, j, max, result=0, len; 
  char arr[1000000]; 
  int cnt[26] = {0, }; 
  int select = 0;
  int number; 
  
  scanf("%s", arr);
  
  len = strlen(arr);
  
  
  for(i=0; i < len; i++){
  // 입력된 문자의 길이만큼 실행시킨다 ( 아까 변수에 지정한 strlen(arr) ) 
  
    if( arr[i] >= 'A' && arr[i] <= 'Z'){
      number = arr[i] - 'A';
    } 
    // arr[i] 가 대문자 A~Z 사이 일 경우에 아스키코드 값상 대문자 A를 빼주면 숫자 0~26 사이로 값이 나오기 때문에 그 값을 number라는 변수에 넣어주었다.
    
    else if ( arr[i] >= 'a' && arr[i] <= 'z'){
      number = arr[i] - 'a';
    }
    // 대문자와 같이 입력값이 소문자 a~z일 경우 소문자 a를 빼주면 숫자 0~26 사이의 값을 number 라는 변수에 담아준다 .
    
    cnt[number]++;
    // number에 저장된 정수값은 cnt[number]의 인덱스로 1만큼 더해준다. 
    // 이렇게 해서 어떤 알파벳이 쓰였는지 하나하나 체크해준다.
   }
   
    max = cnt[0]; 
  // max 라는 변수안에 가장 첫번째 인덱스 값을 넣어주어서 가장 많이 쓰인 알파벳을 찾는다.
  
  for(i = 1; i < 26; i++) { 
    if(max < cnt[i]) { 
      max = cnt[i]; select = i; } }
      // select 변
     
  for(i = 0; i < 26; i++) { 
    if(max == cnt[i]) result++; } 
    // 만약 max 와 cnt[i] 값이 똑같다면 result 에 1씩 더해서 가장 많이 쓰인 알파벳이 2개이상인지 찾아본다.
    
    
  if(result > 1) printf("?\n"); // 만약 2개 이상 많이 사용된 알파벳이 있다면 ? 출력 
  else printf("%c", select+'A'); // 아니라면 아까 지정했던 select는 정수 값으로 지정되어 있어서 대문자 A 만큼 더해서 출력해준다. 
  
  return 0;
}