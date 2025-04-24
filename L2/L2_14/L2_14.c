int main() {
    char c;
    int tem_pont = 0;
     while(1){
       scanf("%c", &c);

       if(!tem_pont){
         printf("RESP:");
         tem_pont = 1;
       }

       if(c == '.' || c == '!' || c =='?'){
         printf("%c", c);
              break;
       }
        if(c == ' '){
          printf("");
        }
        else{
          printf("%c", c);
        }
     }
  return 0;
}