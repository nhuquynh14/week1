//Tran Thi Nhu Quynh 20205122


#include<stdio.h>

int main(){
	int weather;
	printf("Choose the season:\n1: Spring\n2: Summer\n3: Autumn\n4: Winter\n ");
	scanf("%d", &weather); 
	switch(weather){
		case 2:{
			printf("T-shirt + Boxer shorts");
				break;}
		case 1:{
		    printf("Jacket + Jeans ");
		    	break;}
		case 3:{
			printf("Leather jacket + Trousers");
				break;}
        case 4:{
        	printf("Coat + Tights");
        		break;}
        default:{
        	printf("Invaid");
			break;
		}
	}
}
