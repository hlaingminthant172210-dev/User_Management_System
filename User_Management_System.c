#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct user_info {
    int id;
    char name[20];
    int age;
    char address[50];
}user[SIZE];

int count=0;

void  create_user(){
    if(count>=SIZE){
        printf("User limit reached\n\n");
        return;
    }
    user[count].id=count+1;
    printf("id : %d\n",user[count].id);
    printf("Enter user name : "); // '\n' is added when you press Enter.When using scanf or storing in a string,the stored string becomes:'a' 'b' 'c' '\0'
    scanf(" %[^\n]",user[count].name); // The space before %[^\n] means:ignore previous newline then read full line (including spaces)

    printf("Enter user age : ");
    scanf("%d",&user[count].age);
    printf("Enter user address : ");
    scanf(" %[^\n]",user[count].address); //space before %[^\n]

    count++;
    
    printf("\nUser add successfully!\n\n");

}

void read_all_user(){
    if(count==0){
        printf("Empty user! \n");
        return;
    }
    printf("\nReading all users \n");
    printf("********************\n\n");
    for (int i=0; i<count; i++){
        printf("%d ",user[i].id);
        printf("%s ",user[i].name);
        printf("%d ",user[i].age);
        printf("%s \n",user[i].address);
    }


}

void update_user(){
    int id;

    printf("Update User Page \n");
    printf("******************\n");

    printf("Enter ID to update : ");
    scanf("%d",&id);

    

    for (int i=0; i<count; i++){
        if(user[i].id==id){

            printf("User found! going to update...\n\n");

            printf("Enter new name :");
            scanf(" %[^\n]",user[i].name);

            printf("Enter new age : ");
            scanf("%d",&user[i].age);

            printf("Enter new address : ");
            scanf(" %[^\n]",user[i].address);

            printf("\nUser updated successfully \n");

            return; //stop after updated
            
        }    
    }
    printf("User not found! \n");


}

void delete_user(){
    int id;
    printf("Enter id to delete : ");
    scanf("%d",&id);

    for(int i=0; i<count; i++){
        if(user[i].id==id){
            int deleted_id = user[i].id; //save id before shifting

            for(int j=i; j<count-1; j++){
                user[j]=user[j+1];
            }
            count--;
            printf("\nUser id %d deleted  \n\n",deleted_id);
            return; //stop after delete
        }
    }
    printf("User id not found!\n");
}




int main() {
    int n=0;
    while (1){
        printf("\n1.Create user\n2.Read all user\n3.Update User\n4.Delete User\n0.Exit\n\n");
        printf("Enter your options-> ");

        scanf("%d",&n);
        if(n==1){
            create_user();            
        }
        else if(n==2){
            read_all_user();
        }
        else if(n==3){
            update_user();
        }
        else if(n==4){
            delete_user();
        }
        else if(n==0){
            exit(1);
        }
        else{
            printf("\nInvalid Option!\n");
        }
        
    }

    return 0;
}
