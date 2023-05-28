//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node* first=head;
           Node* second=head;
           
           for(int i=1;i<n;i++){
               second=second->next;
               if(second == NULL)return -1;
           }
           
           while(second->next){
               first=first->next;
               second=second->next;
           }
           
           return first->data;
    }
};