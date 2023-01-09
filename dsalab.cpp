// #include<iostream>
// #include<stdio.h>
// #include<math.h>
// using namespace std;
// int main(){
    // int n,width,height,i;
    // cout<<"enter the nos of rectangles";
    // cin>>n;
    // int count=0;
    // for ( i = 0; i < n; i++)
    // {
    //     cout<<"enter width";
    //     cin>>width;
    //     cout<<"enter height";
    //     cin>>height;
    // }
    // for ( i = 0; i < n; i++)
    // {
    //     if(width/height>=1.6 && width/height<=1.7)++count;
    //     // else if(height/width >=1.6 && height/width<=1.7)
    //     // ++count;
    //     else
    //     break;
    
    // }
    // cout<<count+1;






    // int i,n,j,temp,a[i];
    // printf("enter elements in the array");
    // scanf("%d",&n);
    // for ( i = 0; i < n; i++)
    // {
    //     scanf("%d",&a[i]);

    // }
    // for ( i = 0; i < n; i++)
    // {
    //     for (j = i+1; j <n; j++)
    //     {
    //         if (a[i]>a[j])
    //         {
    //             temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;

    //         }
            
    //     }

    //     for ( i = 0; i < n; i++)
    //     {
    //         printf("%d",a[i]);
    //     }
        
        
    // }


    // int l;
    // float a,w,distance;
    // char c[50];
    // int v;
    // printf("enter name of the car");
    // scanf("%s",&c[50]);
    // printf("length of the ramp");
    // scanf("%d",&l);
    // printf("accelaration of the car");
    // scanf("%f",&a);
    // printf("width of the river");
    // scanf("%f",&w);
    // v=sqrt(2*a*l);
    // distance=(v*v)/(9.805);
    // if (distance<(w-5))
    // {
    //     printf("%s will reach a speed of %.2f m/s on a %d ramp crossing %.1f of %.1f meters, SPLASH!",c,v,l,distance,w);
    // }
    // else if (distance>=(w-5)&&(distance<=w))
    // {
    //     printf("%s will reach a speed of %.2f m/s on a %d ramp crossing %.1f of %.1f meters, JOVA MADE IT!",c,v,l,distance,w);
    // }
    // else
    //     printf("%s will reach a speed of %.2f m/s on a %d ramp crossing %.1f of %.1f meters, LIKE A LEGEND!",c,v,l,distance,w);
    

    // int m=10,n,o;
    // int *z=&m;
    // *o=&n;
    // printf("%d",z);
    // printf("\n%d",*z);
    // printf("\n%d",&m);
    // printf("\n%d",&n);
    // printf("\n%d",&o);
    // printf("\n%d",o);
    // printf("\n%d",o);


    // int m,n,sum,h=98;
    // int *x=&m;
    // int *y=&n;
    // scanf("%d \n %d",&m,&n);
    // sum=*x+*y;
    // int *z=&h;
    // printf("%d",sum);
    // printf("\n%d",*z);


    // A complete working C program to demonstrate all insertion methods
// on Linked List

// A linked list node
// struct Node
// {
// int data;
// struct Node *next;
// };

// /* Given a reference (pointer to pointer) to the head of a list and
// an int, inserts a new node on the front of the list. */
// void push(struct Node** head_ref, int new_data)
// {
// 	/* 1. allocate node */
// 	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

// 	/* 2. put in the data */
// 	new_node->data = new_data;

// 	/* 3. Make next of new node as head */
// 	new_node->next = (*head_ref);

// 	/* 4. move the head to point to the new node */
// 	(*head_ref) = new_node;
// }

// /* Given a node prev_node, insert a new node after the given
// prev_node */
// void insertAfter(struct Node* prev_node, int new_data)
// {
// 	/*1. check if the given prev_node is NULL */
// 	if (prev_node == NULL)
// 	{
// 	printf("the given previous node cannot be NULL");
// 	return;
// 	}

// 	/* 2. allocate new node */
// 	struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

// 	/* 3. put in the data */
// 	new_node->data = new_data;

// 	/* 4. Make next of new node as next of prev_node */
// 	new_node->next = prev_node->next;

// 	/* 5. move the next of prev_node as new_node */
// 	prev_node->next = new_node;
// }

// /* Given a reference (pointer to pointer) to the head
// of a list and an int, appends a new node at the end */
// void append(struct Node** head_ref, int new_data)
// {
// 	/* 1. allocate node */
// 	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

// 	struct Node *last = *head_ref; /* used in step 5*/

// 	/* 2. put in the data */
// 	new_node->data = new_data;

// 	/* 3. This new node is going to be the last node, so make next of
// 		it as NULL*/
// 	new_node->next = NULL;

// 	/* 4. If the Linked List is empty, then make the new node as head */
// 	if (*head_ref == NULL)
// 	{
// 	*head_ref = new_node;
// 	return;
// 	}

// 	/* 5. Else traverse till the last node */
// 	while (last->next != NULL)
// 		last = last->next;

// 	/* 6. Change the next of last node */
// 	last->next = new_node;
// 	return;
// }

// // This function prints contents of linked list starting from head
// void printList(struct Node *node)
// {
// while (node != NULL)
// {
// 	printf(" %d ", node->data);
// 	node = node->next;
// }
// }

// /* Driver program to test above functions*/
// int main()
// {
// /* Start with the empty list */
// struct Node* head = NULL;

// // Insert 6. So linked list becomes 6->NULL
// append(&head, 6);

// // Insert 7 at the beginning. So linked list becomes 7->6->NULL
// push(&head, 7);

// // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
// push(&head, 1);

// // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
// append(&head, 4);

// // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL
// insertAfter(head->next, 8);

// printf("\n Created Linked list is: ");
// printList(head);
// struct node
// {int data
// struct *next;
// }*next = NULL;
// struct *head, *newnode;
// *head=NULL;
// newnode=(struct*)malloc(sizeof(structnode));
// if (head==NULL)
// {
//     newnode->data=10;
//     newnod->next=NULL;
//     head=newnode;
// }
// else
// {
//     newnode->next=head;
//     head=newnode;
// }

/* Given a reference (pointer to pointer) to the head of a list
and an int, inserts a new node on the front of the list. */
// void push(struct Node** head_ref, int new_data)
// {
// 	/* 1. allocate node */
// 	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

// 	/* 2. put in the data */
// 	new_node->data = new_data;

// 	/* 3. Make next of new node as head */
// 	new_node->next = (*head_ref);

// 	/* 4. move the head to point to the new node */
// 	(*head_ref) = new_node;
// }



    
//     return 0;
// }


//Benz will reach a speed of 39.56 m/s on a 301 ramp crossing 159.6 of 162.0 meters, JOVA MADE IT!

// #include<stdio.h>
// #include<iomanip>
// #include<stdlib.h>
// void insertAtBeginning(int value)
// {
//  struct Node *newNode;
//  newNode = (struct Node*)malloc(sizeof(struct 
// Node));
//  newNode->data = value;
//  if(head == NULL)
//  {
//  newNode->next = NULL;
//  head = newNode;
//  }
//  else
//  {
//  newNode->next = head;
//  head = newNode;
//  }
//  printf("\nOne node inserted!!!\n");
// }
// int main()
// {
//     insertAtBeginning(5);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     struct node
//     {
//         int data;
//         struct node *next;
//         //struct node *prev;
//     };
//     struct node *head , *newnode, *newnode2, *newnode3;
   
//     // 1.
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = 10;
//     newnode->next = head;
//     head = newnode;
//     printf("%d \n", newnode -> data);
   
//     // 2.
//     newnode2 = (struct node *)malloc(sizeof(struct node));
//     newnode2 -> data = 30;
//     newnode2 -> next = newnode -> next ;
//     newnode -> next = newnode2;
//     printf("%d ", newnode -> data);
//     printf("%d\n", newnode2 -> data);
   
//     // 3.
//     newnode3 = (struct node *)malloc(sizeof(struct node));
//     newnode3 -> data = 20;
//     newnode3 -> next = newnode2 -> next;
//     newnode2 -> next = newnode3;
//     printf("%d ",newnode3 -> data);
//     printf("%d ",newnode -> data);
//     printf("%d\n",newnode2 -> data);
   
//      // 4.
//     struct node *temp = head;
//     head = head -> next;
//     free(temp);
//     printf("%d ",newnode3 -> data);
//     printf("%d ",newnode -> data);
//     printf("%d\n",newnode2 -> data);
   
   
   
   
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     struct node
//     {
//         int data;
//         struct node *next;
//     };
//     struct node *head,*newnode,*temp;
//     head=NULL;
//     int choice,count=0;
//     while (choice)
//     {
//         newnode=(struct node *)malloc(sizeof(struct node));
//         printf("enter data \n");
//         scanf("%d",&newnode->data);
//         newnode->next=0;
//         if (head==0)
//         {
//             head=temp=newnode;
//         }
//         else
//         {
//             temp->next=newnode;
//             temp=newnode;
//         }
//         printf("do you want to continue (0,1) ? ");
//         scanf("\n%d",&choice);
//         temp=head;
//         while (temp!=0)
//         {
//             printf("\n%d",temp->data);
//             temp=temp->next;
//             count++;
//         }
//         printf("\n%d",count);
//         }
    
    
    
//     return 0;
// }


// #include <stdio.h>
// int rear=-1,front=-1;
// int a[8];
// void enqueue(int x){
//     if(rear==8){
//         printf("Queue is Full");
//     }
//     else{
//         rear=rear+1;
//         a[rear]=x;
//     }
//     if(front==-1){
//         front++;
//     }
// }
// void display(){
//     int i;
//     for(i=front;i<=rear;i++){
//         printf("%d",a[i]);
//         printf("\n");
//     }
// }
// int main()
// {
// enqueue(10);
// enqueue(20);
// enqueue(60);
// enqueue(80);
// enqueue(80);
// enqueue(60);
// enqueue(90);
// display();


// #include <stdio.h> 
// using namespace std;
// int main(){
//     void enqueue(int x){
//     front=rear=NULL;
// struct node *newnode;       
// struct node
//     {
//         int data;
//         struct node *next;
//     };
//     struct node *front,*rear;
//     rear->next=newnode;
//     newnode->data=X;
//     newnode->next=NULL;
//     rear->next=newnode;
//     rear=newnode;


//     void display()
//     {
//         struct *temp=front;
//         while (temp!=NULL)
//         {
            
//         }
        
//     }


        
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 8
// int top = -1;
// int s[MAX];
// void push(int x){
//     if (top==MAX)
//     {
//         printf("\n stack is full. ");
//     }
//     else
//     {
//         top=top+1;
//         s[top]=x;
//     }
// }

// void pop(){
//     if (top==-1)
//     {
//         printf("\n stack is empty. ");
//     }
//     else
//     {
        
//         printf("%d",s[top]);
//         top=top-1;
//     }    
// }

// void display(){
//     for (int i = top; i >= 0; i--)
//     {
//         printf("\n%d",s[i]);
//     }
    
// }

// int main()
// {   
//     push(10);
//     push(14);
//     push(19);
//     pop();
//     display();
//     return 0;
// }

// #include<stdio.h>
// #include<stdio.h>
// #define MAX 5
// int top=-1;
// int stack[MAX];
// void push(int x){
// if(top==MAX)
// {
// printf("\nStack is full!!");
// }
// else
// {
// top=top+1;
// stack[top]=x;
// }
// }

// void pop(){
//     if(top==-1){
//         printf("stack is Empty\n");
//     }
//     else{
//         printf("Deleted element is %d\n",stack[top]);
//         top=top-1;
//     }
// }

// void display()
// {
// int i;
// if(top==-1)
// {
// printf("\nStack is empty!!");
// }
// else
// {
// printf("\nStack is...\n");
// for(i=top;i>=0;--i)
// printf("%d\n",stack[i]);
// }
// }

// int main(){
//     push(10);
//     push(14);
//     push(19);
//     pop();
//     display();
//     return 0;
// }



// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*top=NULL;
// void push(int x){
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=x;
//     newnode->next=NULL;
//     if(top==NULL)
//     top=newnode;
//     else{
//     newnode->next=top;
//     top=newnode;
//     }
// }
// void display(){
//     struct node*temp;
//     temp=top;
//     if(top==NULL)
//     printf("Stack is empty\n");
//     else{
//         while(temp!=NULL){
//         printf("%d",temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
// }
// }
// void peek(){
//     if(top==NULL)
//     printf("Stack is empty\n");
//     else{
//     printf("The peek element is %d\n",top->data);
//     }
// }
// void pop(){
//     struct node*temp;
//     temp=top;
//     if(top==NULL){
//         printf("Stack is empty\n");
//     }
//     else{
//         printf("Popped element is %d\n",top->data);
//         top=top->next;
//         free(temp);
        
//     }
// }

// int main()
// {
// push(3);
// push(4);
// push(5);
// display();
// peek();
// pop();
// peek();
// display();
   
//     return 0;
// }


// #include <stdio.h>
// #define N 8
// int rear=-1,front=-1;
// int a[N];
// void enqueue(int x){
//     //overflow condition
//     if(rear==N-1){
//         printf("Queue is Full");
//     }
//     else{
//         rear=rear+1;
//         a[rear]=x;
//     }
//     if(front==-1){
//         front++;
//     }
// }
// void dequeue(){
//     //underflow condition
//     if(rear==-1&&front==-1){
//         printf("Queue is Empty\n");
//     }
//     else{
//         front++;
//     }
// }
// void display(){
//     int i;
//     for(i=front;i<=rear;i++){
//         printf("%d",a[i]);
//         printf("\n");
//     }
// }
// int main()
// {enqueue(80);
// enqueue(60);
// enqueue(90);
// enqueue(24);
// enqueue(56);
// display();
// dequeue();
// dequeue();
// dequeue();
// display();
    
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
 
// // Declaration of node of a linked list
// struct node {
//     int data;
//     struct node* next;
// };
 

// struct node*head=NULL;

// // function to insert a Node at the mentioned position
// void insert(int data, int n)
// {
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     struct node* temp1 = newnode;
//     temp1->data = data;
//     temp1->next = NULL;
    
//     // function to insert node at position 1.
//     if(n==1){
//         temp1->next=head;
//         head=temp1;
//         return;
//     }
    
//     //inserting at the given position
//    struct node* temp2 = head;
    
//     //traversing 
//     for(int i=1; i<n-1; i++){
//         temp2=temp2->next;
//     }
    
//     //updating the link
//     temp1->next=temp2->next;
//     temp2->next=temp1;
    
// }

// //function to display the node
// void print(){
//    struct node* temp=head;
//     while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
// }
// // Driver Code
// int main()
// {
//     // Creating the list 1->3->5->7
//     head = NULL;
//     insert(1,1);
//     insert(3,2);
//     insert(5,3);
//     insert(7,4);
    
//     //adding 2 at pos ition 2.
//     insert(2,3);
//     print();
//     return 0;
// }




// #include <stdio.h>
// #define MAX 8
// int rear=-1,front=-1;
// int a[MAX];
// void enqueue(int x){
//     if(rear==MAX){
//         printf("Queue is Full");
//     }
//     else{
//         rear=rear+1;
//         a[rear]=x;
//     }
//     if(front==-1){
//         front++;
//     }
// }
// void dequeue(){
//     if(rear==-1&&front==-1){
//         printf("Queue is Empty\n");
//     }
//     else{
//         front++;
//     }
// }
// void display(){
//     int i;
//     for(i=front;i<=rear;i++){
//         printf("%d",a[i]);
//         printf("\n");
//     }
// }
// int main()
// {
// enqueue(10);
// enqueue(12);
// enqueue(20);
// dequeue();
// display();
    
//     return 0;
//     }




// #include<stdio.h>
// #define MAX 8
// int rear=-1,front=-1;
// int a[MAX];
// void enqueue(int x)
// {
//     if(rear==MAX)
//     {
//         printf("queue is full\n");
//     }
//     else
//     {
//         rear=rear+1;
//         a[rear]=x;
//     }
//     if (front==-1)
//     {
//         front++;
//     }
    
// }
// void dequeue()
// {
//     if(front==-1&&rear==-1)
//     {
//         printf("queue is empty\n");
//     }
//     else
//     {
//         front++;
//     }
    
// }
// void display()
// {
//     for (int i = front; i <= rear; i++)
//     {
//         printf("%d\n",a[i]);
//     }
    
// }
// int main(){
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     dequeue();
//     dequeue();
//     display();
//     return 0;
// }


// #include<stdio.h>
// #define MAX 5
// int top=-1;
// int stack[MAX];
// void push(int x)
// {
// if(top==MAX)
// {
// printf("\nStack is full!!");
// }
// else
// {
// top=top+1;
// stack[top]=x;
// }
// }
// void pop()
// {
// if(top==-1)
// {
// printf("\nStack is empty!!");
// }
// else
// {
//     top=top-1;
// }
// }
// void display()
// {
// printf("\nStack is...\n");
// for(int i=top;i>=0;i--)
// printf("%d\n",stack[i]);
// }
// int main(){
//     push(10);
//     push(14);
//     push(19);
//     display();
//     pop();
//     display();
//     return 0;
// }






// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*front=NULL;
// struct node*rear=NULL;
// void enqueue(int x){
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=x;
//     newnode->next=NULL;
//     if(front==NULL&&rear==NULL){
//         front=rear=newnode;
//     }
//     else
//     {
//         rear->next=newnode;
//         rear=newnode;
//     }
// }
// void display(){
//     struct node*temp;
//     temp=front;
//     if(front==NULL&&rear==NULL)
//     {
//         printf("Queue is empty\n");
//     }
//     else
//     {
//         while(temp!=NULL)
//         {
//             printf("%d\n",temp->data); 000
//             temp=temp->next;
//         }
//         printf("\n");
//     }
   
// }
// void dequeue(){
//      if(front==NULL&&rear==NULL){
//         printf("Queue is empty\n");
//     }
//     else{
//         printf("The deleted element is %d\n",front->data);
//         struct node*temp;
//         temp=front;
//         front=front->next;
//         free(temp);
//     }
// }

// int main()
// {
// enqueue(80);
// enqueue(60);
// enqueue(90);
// enqueue(24);
// enqueue(56);
// display();
// dequeue();
// dequeue();
// dequeue();
// display();
   
//     return 0;
// }

// code for linear search 

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define size 20
// int main()
// {
//     int arr[size],i,n,num,found=0,pos=-1;
//     printf("enter the number of elements in array: \n");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("enter the %d number: \n",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the number to be searched in array: \n");
//     scanf("%d",&num);
//     for ( i = 0; i < n; i++)
//     {
//         if (arr[i]==num)
//         {
//             found=1;
//             pos=i;
//             printf("%d number is found in %d positon. \n",num,i+1);
//         break;
//         }}
//     if (found==0)
//     {
//         printf("%d doesn't exist in array. \n",num);
//     }
//     return 0;
// }


// code for binary search

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define size 20
// int main()
// {   
//     int arr[size],i,n,num,low,high,mid,key;
//     printf("enter the number of elements to be added: \n");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("enter the %d number: \n",i+1);
//         scanf("%d",&arr[i]);   
//     }
//     low=0;
//     high=n-1;
//     mid=((low+high)/(2));
//     printf("enter the key element to be searched: ");
//     scanf("%d",&key);
//     while (low<=high)
//     {
//         if (arr[mid]==key)
//         {
//             printf("The element is found at %d position.\n",mid+1);
        
//         break;
//         }
//         else if (arr[mid]>key)
//         {
//             high=mid-1;
//         }
//         else if(arr[mid]<key)
//         {
//             low=mid+1;
//         }}
        
//         if(low>high)
//         {
//             printf("element is not present in the array. ");
            
//         }
//         // break;

    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,n,key,s,m,e;
//     cin >> n;
//     int arr[n];
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cin >> key;
//     s = 0;
//     e = n;
//     m = (s+e)/2;
//     while(s<=e){
//         if(arr[m] == key){
//             cout << "Key found at index " << i << endl;
//             break;
//         }else if(arr[m] > key){
//             e = m-1;
//         }else{
//             s = m + 1;
//         }
//     }
// }



// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define size 10
// int main(){
//     int arr[size],i,n,num,temp,j,sum=0;
//     printf("enter the number of elements to be added: \n");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("enter the %d number: \n",i+1);
//         scanf("%d",&arr[i]);   
//     }
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = 0; j < n; j++)
//         {   
//             if(arr[i]<arr[j])
//             {
//                     temp=arr[i];
//                     arr[i]=arr[j];
//                     arr[j]=temp;
//             }
//         }
//     }
//     for ( i = 0; i < n; i++)
//     {   sum+=i;
//         printf("%d\n",arr[i]);
//     }
//     printf("sum is= %d",sum);
//     return 0;
// }



// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define size 10
// struct node
// {
//     int data;
//     struct node* next;
// };
// struct node* head = NULL;
// void insert(int data,int pos)
// {   
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     struct node* temp1=newnode;
//     temp1->data=data;
//     temp1->next=NULL;
// }
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define size 10
// int top=-1;
// int stack[size];
// void push(int x)
// {
//     if (top==size)
//     {
//         printf("stack is full");
//     }
//     else
//     {
//         top=top+1;
//         stack[top]=x;
//     }
// }
// void pop()
// {
//     if (top==-1)
//     {
//         printf("stack is empty");
//     }
//     else
//     {
//         top=top-1;
//         printf("deleted element is %d: ",stack[top]);
//     }
// }
// void display(){
//     printf("stack is ");
//     for (int i = top; i>=0 ; --i)
//     {
//         printf("%d",stack[i]);
//     }
    
// }
// int main(){
//     push(1);
//     push(2);
//     pop();
//     display();

//     return 0;
// }


// #include <stdio.h>
// # define N 8
// int rear=-1,front=-1;
// int a[N];
// void enqueue(int x){
//     //overflow condition
//     if(rear==N-1){
//         printf("Queue is Full");
//     }
//     else{
//         rear=rear+1;
//         a[rear]=x;
//     }
//     if(front==-1){
//         front++;
//     }
// }
// void dequeue(){
//     //underflow condition
//     if(rear==-1&&front==-1){
//         printf("Queue is Empty\n");
//     }
//     else{
//         front++;
//     }
// }
// void display(){
//     int i;
//     for(i=front;i<=rear;i++){
//         printf("%d",a[i]);
//         printf("\n");
//     }
// }
// int main()
// {enqueue(80);
// enqueue(60);
// enqueue(90);
// enqueue(24);
// enqueue(56);
// display();
// dequeue();
// dequeue();
// dequeue();
// display();
    
//     return 0;
// }


//binary search

// #include<stdio.h>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int low,mid,high,n,elmnts[100],key,i;
//     printf("enter no. of elements \n");
//     scanf("%d",&n);
//     printf("enter elements\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d\n",&elmnts[i]);
//     }
    
//     printf("enter the element to search.\n");
//     scanf("%d\n",&key);
   
//     mid=((low+high)/2);
//     low = 0;
//     high = n-1;
//     while (low<=high)
//     { 
        
//         if (key<elmnts[mid])
//         {
//             high=mid-1;

//         }
//         else if(key>elmnts[mid])
//         {
//             low=mid+1;
//         }
//         else if(elmnts[mid]==key)
//         {
//             printf("key is present in the pos: %d \n",mid+1);

//         }
//         else
//         {
//             printf("not found \n");
//         }
//     }
//     printf(".... \n");
//     return 0;
// } 

//linear search

// #include<stdio.h>
// int main()
// {   
//     int n,i,j,ky;
//     printf("enter no. of elements to be searched: \n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the elements:  \n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d \n",&arr[i]);
//     }
//     printf("enter element to search: \n");
//     scanf("%d",&ky);
//     for ( i = 0; i < n; i++)
//     {
//         if (ky==arr[i])
//         {
//             printf("%d key is found in %d position. \n",ky,i+1);
//         }
//         else
//         {   continue;
//             //printf("element is not present in the array...\n");
//         }
        
        
//     }
    
    
//     return 0;
// } 

// code for linear search 

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #define size 20
// int main()
// {
//     int arr[size],i,n,num,found=0,pos=-1;
//     printf("enter the number of elements in array: \n");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("enter the %d number: \n",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the number to be searched in array: \n");
//     scanf("%d",&num);
//     for ( i = 0; i < n; i++)
//     {
//         if (arr[i]==num)
//         {
//             found=1;
//             pos=i;
//             printf("%d number is found in %d positon. \n",num,i+1);
//         break;
//         }}
//     if (found==0)
//     {
//         printf("%d doesn't exist in array. \n",num);
//     }
//     return 0;
// }




// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     struct node
//     {
//         int data;
//         struct node *next;
//     };
//     struct node *head, *newnode, *temp;
//     head=0;
//     int choice;
    
//     while(choice)
//     {
//     newnode=(struct node*)malloc(sizeof(struct node));
//     printf("Enter the data: ");
//     scanf("%d",&newnode->data);
//     newnode->next=0;
    
//     if(head==0)
//     {
//         head=temp=newnode;
//     }
//     else
//     {
//         temp->next=newnode;
//         temp=newnode;
//     }
//     printf("Do you want to continue(0,1)?: ");
//     scanf("%d",&choice);
//     }
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d",temp->data);
//         temp=temp->next;
//     }
    
//     struct new
//     {
//         int data;
//         struct new*next;
//     };
//     struct new *begnode;
//     begnode=(struct new*)malloc(sizeof(struct new));
//     printf("Enter the element: ");
//     scanf("%d",&begnode->data);
//     begnode->next=head;
//     head=begnode;
    
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d",temp->data);
//         temp=temp->next;
//     }
// }




// #include<iostream>

// using namespace std;


// struct node
// {
//     int data;
//     node *next;
// };
// int linklist();
// int insert_begnning();
// int insert_given_location();
// int insert_end();

// int display();

// node *head,*newnode,*temp;

// int linklist()
// {
//     head=0;

//     int choice=1;

//     while(choice)
//     {
//         newnode=new node;

//         cout<<"Enter data"<<endl;
//         cin>>newnode->data;

//         newnode->next=0;

//         if(head==0)
//             head=temp=newnode;
//         else
//         {
//             temp->next=newnode;
//             temp=newnode;
//         }

//         cout<<"Enter your choice"<<endl;
//         cin>>choice;
//         cout<<endl;
//     }

//     temp=head;

//     return 0;
// }

// int main()
// {
//     linklist();
//     insert_begnning();
//     insert_given_location();
//     insert_end();
//     display();
// }

// int insert_begnning()
// {
//     newnode=new node;

//     cout<<"Enter the data you want to insert in begnning"<<endl;
//     cin>>newnode->data;
//     cout<<endl;

//     newnode->next=head;
//     head=newnode;

//     temp=head;
// }

// int insert_given_location()
// {
//     int p,i=1;

//     cout<<"Enter the position"<<endl;
//     cin>>p;

//    // if(p>l)
//    //     cout<<"invalid position";
//    // else
//    // {
//        while(i<p)
//        {
//            temp=temp->next;
//            i++;
//        }

//         newnode=new node;

//     cout<<"Enter the data you want to insert in the given position"<<endl;
//     cin>>newnode->data;
//     cout<<endl;

//     newnode->next=temp->next;
//     temp->next=newnode;

//   //  }


//     temp=head;

// }

// int insert_end()
// {
//      newnode=new node;

//     cout<<"Enter the data you want to insert in end"<<endl;
//     cin>>newnode->data;
//     cout<<endl;

//     newnode->next=0;

//     while(temp->next!=0)
//     {
//         temp=temp->next;
//     }

//     temp->next=newnode;

//     temp=head;
// }

// int display()
// {
//     while(temp!=0)
//     {
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }

//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
 
// // Declaration of node of a linked list
// struct node 
// {
//     int data;
//     struct node* next;
// };
 

// struct node*head=NULL;

// // function to insert a Node at the mentioned position
// void insert(int data, int n)
// {
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     struct node* temp1 = newnode;
//     temp1->data = data;
//     temp1->next = NULL;
    
//     // function to insert node at position 1.
//     if(n==1){
//         temp1->next=head;
//         head=temp1;
//         return;
//     }
    
//     //inserting at the given position
//    struct node* temp2 = head;
    
//     //traversing 
//     for(int i=1; i<n-1; i++){
//         temp2=temp2->next;
//     }
    
//     //updating the link
//     temp1->next=temp2->next;
//     temp2->next=temp1;
    
// }

// //function to display the node
// void print(){
//    struct node* temp=head;
//     while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
// }
// // Driver Code
// int main()
// {
//     // Creating the list 1->3->5->7
//     head = NULL;
//     insert(1,1);
//     insert(3,2);
//     insert(5,3);
//     insert(7,4);
    
//     //adding 2 at position 2.
//     insert(2,2);
//     print();
//     return 0;
// }


// //??insert at beg..


// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*head=NULL;
// void insert(int data){
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     struct node*ptr2=newnode;
//     ptr2->data=data;
//     ptr2->next=NULL;
// //insert node at first position
//     ptr2->next=head;
//     head=ptr2;
// }
// void print()
// {
//     struct node*p=head;
//     while(p!=NULL){
//         printf("%d",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }

// int main()
// { // Creating the list 1->3->5->7
//     head = NULL;
//     insert(7);
//     insert(5);
//     insert(3);
//     insert(1);
//     //adding 2 at beginning
//     insert(2);
//     print();
//     return 0;
// }

// // ??insert at last


// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*head=NULL;
//   void insert(int value)
//  { 
//  struct node*newnode;
//   newnode=(struct node*)malloc(sizeof(struct node));
//   newnode->data=value;
//   newnode->next=NULL;
//   if(head==NULL)
//    {
//      head=newnode;
//    } 
//   else
//    {
//     struct node*temp=head;
//      while(temp->next!=NULL)
//       {
//        temp=temp->next;
//       }
//      temp->next=newnode;
//  }
// }
// void print(){
//     struct node*p=head;
//     while(p!=NULL){
//         printf("%d",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }
// int main()
// {// Creating the list 1->3->5->7
//     head = NULL;
//     insert(7);
//     insert(5);
//     insert(3);
//     insert(1);
//     //adding 2 at last
//     insert(2);
//     print();
//     return 0;
// }

// //delete from end


// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*head=NULL;
// void insert(int data){
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=head;
//     head=newnode;
// }
// void deletefromend(){
//     struct node*prevnode;
//      struct node*temp=head;
//      while(temp->next!=0){
//          prevnode=temp;
//          temp=temp->next;
//      }
//      if(temp==head){
//          head=0;
//      }
//      else{
//          prevnode->next=NULL;
//      }
//      free(temp);
// }
// void print(){
//     struct node*p=head;
//     while(p!=NULL){
//         printf("%d",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }
// int main()
// {// Creating the list 1->3->5->7
//     head = NULL;
//     insert(1);
//     insert(3);
//     insert(5);
//     insert(7);
//    deletefromend();
//    deletefromend();
//     print();
    

//     return 0;
// }

// //delete from beg..


// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*head=NULL;
// void insert(int data){
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=head;
//     head=newnode;
// }
// void deletefrombeg(){
//     if (head==NULL){
//     printf("List is already empty\n");
//     }
//     else{
//     struct node*temp=head;
//     head=head->next;
//      free(temp);
//     }
// }
// void print(){
//     struct node*p=head;
//     while(p!=NULL){
//         printf("%d",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }
// int main()
// {// Creating the list 1->3->5->7
//     head = NULL;
//     insert(1);
//     insert(3);
//     insert(5);
//     insert(7);
//    deletefrombeg();
//     print();
    

//     return 0;
// }

// // delete from specific position..


// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*head=NULL;
// void insert(int data){
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=head;
//     head=newnode;
// }
// void deletefrompos(){
//    struct node*temp=head;
//    struct node*nextnode;
//    int pos,i=1;
//    printf("Enter position\n");
//    scanf("%d",&pos);
//    while(i<pos-1){
//        temp=temp->next;
//        i++;
//    }
//    nextnode=temp->next;
//    temp->next=nextnode->next;
//    free(nextnode);
// }
// void print(){
//     struct node*p=head;
//     while(p!=NULL){
//         printf("%d",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }
// int main()
// {// Creating the list 1->3->5->7
//     head = NULL;
//     insert(1);
//     insert(3);
//     insert(5);
//     insert(7);
//    deletefrompos();
//     print();
    

//     return 0;
// }

//////////////////////////////////////////

//stack using arrays

// #include <stdio.h>
// #define MAX 8
// int top=-1;
// int stack[MAX];
// void push(int x){
// if(top==MAX)
// {
// printf("\nStack is full!!");
// }
// else
// {
// top=top+1;
// stack[top]=x;
// }
// }

// void display()
// {
// int i;
// if(top==-1)
// {
// printf("\nStack is empty!!");
// }
// else
// {
// printf("\nStack is...\n");
// for(i=top;i>=0;--i)
// printf("%d\n",stack[i]);
// }
// }
// int main(){
//     push(10);
//     push(20);
//     push(60);
//     push(80);
//     push(80);
//     push(60);
//     push(90);
//     display();
//     return 0;
// }


// //queue using array


// #include <stdio.h>
// #define MAX 4
// int rear=-1,front=-1;
// int a[MAX];
// void enqueue(int x){
//     if(rear==MAX)
//     {
//         printf("Queue is Full");
//     }
//     else
//     {
//         rear=rear+1;
//         a[rear]=x;
//     }
//     if(front==-1)
//     {
//         front++;
//     }
// }

// void display()
// {
//     int i;
//     for(i=front;i<=rear;i++)
//     {
//         printf("%d",a[i]);
//         printf("\n");
//     }
// }

// int main()
// {
// enqueue(20);
// enqueue(40);
// enqueue(60);
// display();
    
//     return 0;
// }


// //queue using linked list


// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*front=NULL;
// struct node*rear=NULL;
// void enqueue(int x){
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=x;
//     newnode->next=NULL;
//     if(front==NULL&&rear==NULL)
//     {
//         front=rear=newnode;
//     }
//     else
//     {
//         rear->next=newnode;
//         rear=newnode;
//     }
// }
// void display(){
//     struct node*temp;
//     temp=front;
//      if(front==NULL&&rear==NULL){
//         printf("Queue is empty\n");
//     }
//     else{
//         while(temp!=NULL){
//             printf("%d\n",temp->data);
//             temp=temp->next;
//         }
//         printf("\n");
//     }
   
// }
// void dequeue(){
//      if(front==NULL&&rear==NULL){
//         printf("Queue is empty\n");
//     }
//     else{
//         printf("The deleted element is %d\n",front->data);
//         struct node*temp;
//         temp=front;
//         front=front->next;
//         free(temp);
//     }
// }

// int main()
// {enqueue(80);
// enqueue(60);
// enqueue(90);
// enqueue(24);
// enqueue(56);
// display();
// dequeue();
// dequeue();
// dequeue();
// display();
   
//     return 0;
// }



// //Stack using linked list


// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// struct node*top=NULL;
// void push(int x){
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=x;
//     newnode->next=NULL;
//     if(top==NULL)
//     top=newnode;
//     else{
//     newnode->next=top;
//     top=newnode;
//     }
// }
// void display(){
//     struct node*temp;
//     temp=top;
//     if(top==NULL)
//     printf("Stack is empty\n");
//     else{
//     while(temp!=NULL){
//         printf("%d",temp->data);
//         temp=temp->next;
//     }
//     printf("\n");
// }
// }
// void peek(){
//     if(top==NULL)
//     printf("Stack is empty\n");
//     else{
//     printf("The peek element is %d\n",top->data);
//     }
// }
// void pop(){
//     struct node*temp;
//     temp=top;
//     if(top==NULL){
//         printf("Stack is empty\n");
//     }
//     else{
//         printf("Popped element is %d\n",top->data);
//         top=top->next;
//         free(temp);
        
//     }
// }

// int main()
// {push(3);
// push(4);
// push(5);
// display();
// peek();
// pop();
// peek();
// display();
   
//     return 0;
// }
