
class Solution {
public:
ListNode*solve(ListNode*temp1,ListNode*temp2){
    
    ListNode*prev=NULL;
    ListNode*curr=temp1;
    ListNode*next=temp1->next;

    while(curr!=temp2){
        curr->next=prev;
        prev=curr;
        curr=next;
        if(curr)
        next=curr->next;
    }
    curr->next=prev;
    return curr;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL)return head;
        if(left==right)return head;
        ListNode*temp=head;
        ListNode*prev=NULL;
        int cnt=1;
        while(temp!=NULL && cnt<left){
            ++cnt;
            prev=temp;
            temp=temp->next;
        }
        
        ListNode* temp2=head;
        cnt=1;
        while(temp2!=NULL && cnt<right){
            ++cnt;
           
            temp2=temp2->next;
        }
      ListNode* saveTemp2Next=temp2->next;

       ListNode*ans= solve(temp,temp2);
        if(left!=1){
        prev->next=ans;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=saveTemp2Next;}
        else{
        

        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=saveTemp2Next;
        return ans;}
        return head;

    }
};


