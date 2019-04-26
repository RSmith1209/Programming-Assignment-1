/////////////////*prototypes*//////////////////
void rotationEncrypt();
///////////////////////////////////////////////
# include <stdio.h>
int main(){
    int selection;
    printf("Select an option:\n 1) Rotation Encryption\n 2) Rotation Decryption\n 3) Substitution Encryption\n 4) Substitution Decryption\n");
    printf("Option: ");
    scanf(" %d", &selection);
    switch(selection){
        case 1:
       rotationEncrypt();//encryption of rotation cypher function prototype
        break;
        case 2:
        //decryption of rotation cypher function prototype
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
void rotationEncrypt(){
    char text[100], msg;
	int n, key;
   printf("Enter message to be encrypted: "); 
   scanf(" %*c", text);
   printf("Enter key: ");
   scanf(" %d", &key);
   for(n = 0; text[n] != '\0'; ++n){
	    msg = text[n]; 
	    
	    if (msg >= 'a' && msg <= 'z')   {
	        msg = msg + key;
	        
	        if(msg > 'z') {
	            msg = msg - 'z' + 'a' - 1;
	    }
	    text[n] = msg;	    
	}
	else if(msg >= 'A' && msg <= 'Z')   {
	    msg = msg + key;
	    
	    if (msg > 'Z')   {
	       msg = msg - 'Z' + 'A' - 1; 
	    }
	    text[n] = msg;
	}
    
}
    printf("Encrypted message is: %s", text);
    
}
//////////////////////////////////////////////////////////

///////////////*decryption of rotation cypher definition*//////////////
void rotationDecrypt(){
    
}

//encryption of substitution cypher definition

//decryption of substitution cypher definition