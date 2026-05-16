typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

#define SIZE 1000

typedef struct {
    Node* buckets[SIZE];

} HashMap;

int hash(int key) { return abs(key) % SIZE; }
void insert(HashMap* map, int key, int value) {
    int index = hash(key);

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = map->buckets[index];

    map->buckets[index] = newNode;
}

int search(HashMap* map, int key) {
    int index = hash(key);

    Node* curr = map->buckets[index];
    while (curr) {
        if (curr->key == key) {
            return curr->value;
        }
        curr = curr->next;
    }
    return -1;
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {

    HashMap* map = (HashMap*)malloc(sizeof(HashMap));

    for (int i = 0; i < SIZE; i++) {
        map->buckets[i] = NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        int prevIdx = search(map, nums[i]);

        if (prevIdx != -1) {
            if (abs(prevIdx - i) <= k)
                return true;
        }

        insert(map, nums[i], i);
    }
    return false;
}
