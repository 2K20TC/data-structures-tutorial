#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<math.h>

struct node {
    
    struct node *left;
    int data;
    struct node *right;
    
};

struct node *insert(struct node *root,char loc[20]) {
    
    int a,b;
    struct node *temp = malloc(sizeof(struct node)),*adres = root;
    
    scanf("%d",&a);
    
    temp->data = a;
    temp->right = temp->left = NULL;
    
    if(root == NULL) {
        
        root = temp;
        
    }
    else {
        
        for(b = 0; b < strlen(loc)-1 ; b++ ) {
            
            switch(loc[b])
            {
                case 'L' :  adres = adres->left;
                            break;
                case 'R' :  adres = adres->right;
                            break;
            }
            
        }
            if(loc[b] == 'L') {
                
                adres->left = temp;
                
            }
            else if(loc[b] == 'R') {
                
                adres->right = temp;
                
            
        }

    }

    return root;
    
}
int max(int a, int b)
{
  return (a >= b)? a: b;
} 
/*int  i = -1, a[8];
void preorder(struct node *root)
{
	struct node *adres =root;
	if(adres == NULL)
		return;
	a[++i] = adres->data;
	preorder(adres->left);
	preorder(adres->right);
}
*/
int height(struct node* root) {
    if ( root == NULL )
    {
        return 0;
    }
 
        return 1 + max(height(root->left),height(root->right));

}

int diameter(struct node* root) {
        if (root == NULL) {
        
            return 0;
        
        }
        else {

            int lHeight = height(root->left);
            int rHeight = height(root->right);
        
            int lDepth = diameter(root->left);
            int rDepth = diameter(root->right);
            
            return max(lHeight + rHeight + 1 , max(lDepth,rDepth));
            
        }

} 

int main() {
    
    struct node * root = NULL;
    int item, N, i = 0;
    char str[20];
    scanf("%d",&N);
    i = 2*(N-1);
    root = insert(root,NULL);
    do {
        
        scanf("%s",str);
        root = insert(root,str);
        i-=2;
        
    }while(i > 0);
    //preorder(root);
    //for(i = 0; i < 8; i++) printf("%d",a[i]);
    item = diameter(root);
    printf("%d\n",item);
}    
