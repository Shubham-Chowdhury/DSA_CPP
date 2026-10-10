class MyCircularQueue {
    int *arr;
    int capacity;
    int curSize;
    int rear, front;
public:
    MyCircularQueue(int k) {
        arr = new int[k];
        capacity = k;
        curSize = 0;
        rear = -1;
        front = 0;
    }
    
    bool enQueue(int value) {
        if(curSize == capacity){
            return false;
        }
        else{
            rear = (rear + 1) % capacity;
            arr[rear] = value;
            curSize++;
            return true;
        }

    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        else{
            front = (front + 1) % capacity;
            curSize--;
            return true;
        }
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }
    
    bool isEmpty() {
        return curSize == 0;
    }
    
    bool isFull() {
        return curSize == capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */