

int main(){
    
   setlocale(LC_ALL,"Portuguese");
   int numero,antecessor,sucessor;
   
   printf("Digite um número e descubra seu antecessor e sucessor");
   scanf("%i",&numero);
   
   antecessor = --numero;
   sucessor = ++ numero;
   
   printf("\nvocê digitou o número:\t%i\no antecessor é:\t%i\no sucessor é:\t%i",numero,antecessor,sucessor)

   return 0;
}