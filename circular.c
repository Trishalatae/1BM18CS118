#include<stdio.h>
#include<stdlib.h>
#define qsize 5
void enqueue(int q[] , int *r , int *count);
void dequeue(int q[] , int *f , int *count);
void display(int q[] , int *r , int *f , int *count);
void main()
{
  int q[qsize] , ch , r = -1 , f = 0 , count = 0;
  while(1)
  {
    printf("\n\nEnter your choice\n");
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
    scanf("%d", &ch);
    switch(ch)
    {
      case 1 : enqueue(q , &r , &count) ;
               break;
      case 2 : dequeue(q, &f , &count) ;
               break;
      case 3 : display(q , &r , &f , &count) ;
               break;
      case 4 : exit(0);      default : printf("Invalid choice\n\n");
25
    }
26
  }
27
}
28
  
29
void enqueue(int q[] , int *r , int *count)
30
  {
31
    int item;
32
    printf("Enter the item to be inserted\n");
33
    scanf("%d", &item);
34
    if(*count >= qsize)
35
    {
36
      printf("Queue is full \n");
37
    }
38
      ((*r)++) % qsize ;
39
      q[*r] = item;
40
      *count = *count + 1;
41
  }
42
  
43
void dequeue(int q[] , int *f , int *count)
44
  {
45
    if(*count == 0)
46
    {
47
      printf("Queue is empty\n");
48
    }
49
    printf("Element deleted is %d", q[*f]);
50
    ((*f)++) % qsize ;
51
    *count = *count - 1;
52
  }
53
  
54
void display(int q[] , int *f , int *count)
55
  {
56
    int i;
57
    if(*count == 0)
58
    {
59
      printf("Circular queue is empty\n");
60
    }
61
    for(i = 0; i< *count ; i++)
62
    {
63
      printf("%d", q[*f]);
64
      ((*f)++) % qsize ;
65
    }
66
  }
67
  
      default : printf("Invalid choice\n\n");
    }
  }
}
  
void enqueue(int q[] , int *r , int *count)
  {
    int item;
    printf("Enter the item to be inserted\n");
    scanf("%d", &item);
    if(*count >= qsize)
    {
      printf("Queue is full \n");
    }
      ((*r)++) % qsize ;
      q[*r] = item;      default : printf("Invalid choice\n\n");
25
    }
26
  }
27
}
28
  
29
void enqueue(int q[] , int *r , int *count)
30
  {
31
    int item;
32
    printf("Enter the item to be inserted\n");
33
    scanf("%d", &item);
34
    if(*count >= qsize)
35
    {
36
      printf("Queue is full \n");
37
    }
38
      ((*r)++) % qsize ;
39
      q[*r] = item;
40
      *count = *count + 1;
41
  }
42
  
43
void dequeue(int q[] , int *f , int *count)
44
  {
45
    if(*count == 0)
46
    {
47
      printf("Queue is empty\n");
48
    }
49
    printf("Element deleted is %d", q[*f]);
50
    ((*f)++) % qsize ;
51
    *count = *count - 1;
52
  }
53
  
54
void display(int q[] , int *f , int *count)
55
  {
56
    int i;
57
    if(*count == 0)
58
    {
59
      printf("Circular queue is empty\n");
60
    }
61
    for(i = 0; i< *count ; i++)
62
    {
63
      printf("%d", q[*f]);
64
      ((*f)++) % qsize ;
65
    }
66
  }
67
  
      *count = *count + 1;
  }
  
void dequeue(int q[] , int *f , int *count)
  {
    if(*count == 0)
    {
      printf("Queue is empty\n");
    }
    printf("Element deleted is %d", q[*f]);
    ((*f)++) % qsize ;
    *count = *count - 1;
  }
  
void display(int q[] , int *r ,int *f , int *count)
  {
    int i;
    if(*count == 0)
    {
      printf("Circular queue is empty\n");
    }
   printf("\nElements in Circular Queue are: "); 
    if (*r >= *f) 
    { 
        for (int i = *f; i <= *r; i++) 
            printf("%d ",q[i]); 
    } 
    else
    { 
        for (int i = *f; i < qsize; i++) 
            printf("%d ", q[i]); 
  
        for (int i = 0; i <= *r; i++) 
            printf("%d ", q[i]); 
    } 
  }
  
    
      
    
    
      
      
