#include<stdio.h>
#include<string.h>

int deque[10001]={0,};
char command[15];
int dequenum = 0;

void callpush_front(int value);
void callpush_back(int value);
void callpop_front();
void callpop_back();
void callsize();
void callempty();
void callfront();
void callback();


int main() {
	int task, i, value;
	char *pushf = "push_front", *pushb = "push_back", *popf = "pop_front", *popb = "pop_back";
	char *size = "size", *empty = "empty", *front = "front", *back = "back";
	scanf("%d", &task);
	
	for(i=0;i<task;i++){
	    
	    scanf("%s", command);

	    if(strcmp(command, pushf) == 0){
	        scanf("%d", &value);
	        callpush_front(value);
	    }
	    if(strcmp(command, pushb) == 0){
	        scanf("%d", &value);
	        callpush_back(value);
	    }
	    else if(strcmp(command, popf) == 0){
	        callpop_front();
	    }
	    else if(strcmp(command, popb) == 0){
	        callpop_back();
	    }
	    else if(strcmp(command, size) == 0){
	        callsize();
	    }
	    else if(strcmp(command, empty) == 0){
	        callempty();
	    }
	    else if(strcmp(command, front) == 0){
	        callfront();
	    }
	    else if(strcmp(command, back) == 0){
	        callback();
	    }
	}
}

void callpush_front(int value){
    for(int i=dequenum;i>=0;i--){
        deque[i+1] = deque[i];
    }
    deque[0] = value;
    dequenum++;
}
void callpush_back(int value){
    deque[dequenum] = value;
    dequenum++;
}
void callpop_front(){
    if(deque[0] == 0 && dequenum == 0)
        printf("-1\n");
    else{
        printf("%d\n", deque[0]);
        for(int i=0;i<dequenum;i++){
            deque[i] = deque[i+1];
        }
        deque[dequenum] = 0;
        dequenum--;
    }
}
void callpop_back(){
    if(deque[0] == 0 && dequenum == 0)
        printf("-1\n");
    else{
        printf("%d\n", deque[dequenum-1]);
        deque[dequenum-1] = 0;
        dequenum--;
    }
}
void callsize(){
    printf("%d\n", dequenum);
}
void callempty(){
    if(dequenum==0&&deque[dequenum]==0)
        printf("1\n");
    else
        printf("0\n");
}
void callfront(){
    if(dequenum==0&&deque[dequenum]==0)
        printf("-1\n");
    else
        printf("%d\n", deque[0]);
}
void callback(){
    if(dequenum==0&&deque[dequenum]==0)
        printf("-1\n");
    else
        printf("%d\n", deque[dequenum-1]);
}