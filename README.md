# c-list
## Non-linked list for C  
Methods are:  

### Creating the list:

     List *create_list(int objectSize, int length);  
    
### Allocating more memory: 

    void list_addSpace(List *list, unsigned int objectCount);
    
### Adding item to the list:
    
    void list_add(List *list, void *object_ptr);
    
### Getting an item by index:  
  
    void *list_get(List *list, int index);
    
### Removing item from index:
    
    void list_remove_at(List* list, int index);

### Setting item value from index:

    void list_set(List* list, int index, void* value);
