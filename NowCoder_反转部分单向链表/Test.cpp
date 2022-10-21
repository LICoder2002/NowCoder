#define _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct list_node {
    int val;
    struct list_node* next;
};

list_node* input_list(void)
{
    int n, val;
    list_node* phead = new list_node();
    list_node* cur_pnode = phead;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &val);
        if (i == 1) {
            cur_pnode->val = val;
            cur_pnode->next = NULL;
        }
        else {
            list_node* new_pnode = new list_node();
            new_pnode->val = val;
            new_pnode->next = NULL;
            cur_pnode->next = new_pnode;
            cur_pnode = new_pnode;
        }
    }
    return phead;
}


list_node* reverse_list(list_node* head, int L, int R)
{
    //��������ɴ���
    if (L == R)
        return head;
    list_node* flag_head = new list_node();
    flag_head->next = head;
    list_node* pre = flag_head;

    for (int i = 1; i < L; ++i) //�ҵ���ת�����ǰ��
    {
        pre = pre->next; 
    }

    list_node* cur = pre->next; //curָ��ת����ĵ�һ���ڵ�
    for (int i = 0; i < (R - L); ++i)
    {
        list_node* tmp = cur->next;
        
        cur->next = tmp->next;

        tmp->next = pre->next;
        pre->next = tmp;
    }

    return flag_head->next;
}

void print_list(list_node* head)
{
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    puts("");
}


int main()
{
    int L, R;
    list_node* head = input_list();
    scanf("%d%d", &L, &R);
    list_node* new_head = reverse_list(head, L, R);
    print_list(new_head);
    return 0;
}