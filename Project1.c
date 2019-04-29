/////////////////*prototypes*//////////////////
void rotationEncrypt(char* text, int key);
void rotationDecrypt(char* text, int key);
void subEncrypt();
void subDecrypt();
void bruteDecrypt();
///////////////////////////////////////////////
# include <stdio.h>
int main(){
    char text[100];
    int key;
    int selection;
////////////////////////////*MENU*//////////////////////////////////////////
    printf("Select an option:\n 1) Rotation Encryption\n 2) Rotation Decryption\n 3) Substitution Encryption\n 4) Substitution Decryption\n 5) Brute force Rotatation Decryption\n");
    printf("Option: "); // Menu is printed
    scanf(" %d", &selection);
    switch(selection){
        case 1:
        rotationEncrypt(text, key);//encryption of rotation cypher function prototype
        break;
        case 2:
        rotationDecrypt(text, key);//decryption of rotation cypher function prototype
        break;
        case 3:
        subEncrypt();//encryption of substitution cypher function prototype
        break;
        case 4:
        subDecrypt();//decryption of substitution cypher function prototype
        break;
        case 5:
        bruteDecrypt();//brute force decryption of rotation cypher prototype
        break;
    }
/////////////////////////////////////////////////////////////////////////
}

/////////////*encryption of rotation cypher definition*/////////////
void rotationEncrypt(char* text, int key){
   char msg;
   int n;
   printf("Enter message to be encrypted: "); 
   scanf(" %[^\n]*c", text);
   printf("Key: ");
   scanf("%d", &key);
   for(n = 0; text[n] != '\0'; ++n){ //each character of message individually has the key added to it
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
//////////////////////////////////////////////////////////////////////

///////////////*decryption of rotation cypher definition*//////////////
void rotationDecrypt(char* text, int key){
  char msg;
  int n;
  printf("Enter message to be decrypted: "); 
   scanf(" %[^\n]*c", text);
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
printf("Decrypted message is: %s\n", text);
}
//////////////////////////////////////////////////////////////////////

////////////////*encryption of substitution cypher definition*//////////
void subEncrypt(){

    char text[100], subAlpha[26];
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U','V','W','X','Y','Z'};
    char character;
    int i, n;
    printf("Enter a message to encrypt: \n");
    scanf(" %[^\n]*c", text);
    printf("Enter your substituted alphabet IN CAPITALS: ");
    scanf(" %s", subAlpha);
    
    for(i = 0; text[i] != '\0'; i++) {
        character = text[i]; 
        
        if(character >= 'a' && character <= 'z')    {
            character = character -32;
        }
    
        for (n = 0; n <= 25; n++)   {
            if (character == alpha[n])  {
            character = subAlpha[n];
            text[i] = character;
            break;
        }
    }
}
    printf("Encrypted message is: %s\n", text);
}
///////////////////////////////////////////////////////////////////////
//decryption of substitution cypher definition/////////////////////////
void subDecrypt() {
    
char text[100], subAlpha[26];
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U','V','W','X','Y','Z'};
    char character;
    int i, n;
    printf("Enter a message to decrypt: \n");
    scanf(" %[^\n]*c", text);
    printf("Enter the substituted alphabet IN CAPITALS: ");
    scanf(" %s", subAlpha);
    
    for(i = 0; text[i] != '\0'; i++) {
        character = text[i]; 
        
        if(character >= 'a' && character <= 'z')    {
            character = character -32;
        }
    
        for (n = 0; n <= 25; n++) {
            if (character == subAlpha[n])  {
            character = alpha[n];
            text[i] = character;
            break;
        }
    }
}
    printf("Decrypted message is: %s\n", text);
}
/////////////////////////////////////////////////////////
void bruteDecrypt(){
  char* msg, text[100];
  int n, key;
  printf("Enter message to be decrypted: "); 
  scanf(" %[^\n]*c", text);
  for(key = 1; key < 27; key++) {
    for(n = 0; text[n] != '\0'; ++n){
	    msg = text[n];
	    
	   if (msg >= 'A' && msg <= 'Z')   {
	    msg = msg - 1;
	    
	       if (msg < 'A')   {
	       msg = msg + 'Z' - 'A' +1; 
	       }
	  text[n] = msg;     
	}
    
}
printf("Decrypted message is: %s, with key %d\n", text, key);
}
}