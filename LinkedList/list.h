#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct infotype
{
    char no_hp[14], nama [20], alamat[100],email[50];
    int ID_customer;
};

typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};

struct list
{
    address first;
};

void deleteFirst (list *l, address p);
void deleteLast (list *l, address p);

#endif // LIST_H_INCLUDED
