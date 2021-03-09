#include <stdio.h>

bool is_vowel(char c){
	//only change function is_vowel.
}

int get_vowel(char word[]){
	int ret=0;
	for(int i=0;word[i]!='\0';i++){
		if(is_vowel(word[i])){
			ret++;
		}
	}
	return ret;
}

int main(){
	char word[105]={};
	scanf("%s",word);
	printf("%d",get_vowel(word));
}