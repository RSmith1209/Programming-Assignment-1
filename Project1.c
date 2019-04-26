/////////////////*prototypes*//////////////////
void rotationEncrypt(char* text, int key);
///////////////////////////////////////////////
# include <stdio.h>
int main(){
    char text[100];
    int key;
    int selection;
    printf("Select an option:\n 1) Rotation Encryption\n 2) Rotation Decryption\n 3) Substitution Encryption\n 4) Substitution Decryption\n");
    printf("Option: ");
    scanf(" %d", &selection);
    switch(selection){
        case 1:
       rotationEncrypt(text, key);//encryption of rotation cypher function prototype
        break;
        case 2:
        rotationDecrypt(text, key);//decryption of rotation cypher function prototype
        break;
        case 3:
        //encryption of substitution cypher function prototype
        break;
        case 4:
        //decryption of substitution cypher function prototype
        break;
    }

}

/////////////*encryption of rotation cypher definition*/////////////
void rotationEncrypt(char* text, int key){
    char msg;
	int n;
   printf("Enter message to be encrypted: "); 
   scanf(" %[^\n]c", text);
   printf("Key: ");
   scanf("%d", &key);
   for(n = 0; text[n] != '\0'; ++n){
	    msg = text[n]; 
	    
	if (msg >= 'A' && msg <= 'Z')   {
	    msg = msg + key;
	    
	    if (msg > 'Z')   {
	       msg = msg - 'Z' + 'A' - 1; 
	    }
	    text[n] = msg;
	}
    
}
    printf("Encrypted message is: %s\n", text);
    
}
//////////////////////////////////////////////////////////

///////////////*decryption of rotation cypher definition*//////////////
void rotationDecrypt(char* text, int key){
  char msg;
  int n;
  printf("Enter message to be decrypted: "); 
   scanf(" %[^\n]c", text);
   printf("Key: ");
   scanf("%d", &key);
  for(n = 0; text[n] != '\0'; ++n){
	    msg = text[n];
	    
	if (msg >= 'A' && msg <= 'Z')   {
	    msg = msg - key;
	    
	    if (msg < 'A')   {
	       msg = msg + 'Z' - 'A' +1; 
	    }
	    text[n] = msg;
	}
    
}
printf("Decrypted message is: %s", text);
}
///////////////////////////////////////////////////////////////
//encryption of substitution cypher definition

//decryption of substitution cypher definition