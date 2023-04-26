import java.util.* ;
import java.io.*; 


public class Deque 
{
    int rear, front, size = 101;
    int[] q = new int[100];
    // Initialize your data structure.
    public Deque(int n) 
    {
        // Write your code here.
        front = -1;
        rear = -1;
        q=new int[n];
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    public boolean pushFront(int x) 
    {
        // Write your code here.
        if(this.isFull())
        return false;
        if(front == -1)
        {
            front = 0; 
            rear = 0;
        }
        else
        {
            front = (front-1)%size;
            q[front]=x;

        }
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    public boolean pushRear(int x) 
    {
        // Write your code here.
        if(this.isFull())
        return false;
        rear=(rear+1)%size;
        if(front == -1)
        front=0;
        q[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    public int popFront() 
    {
        // Write your code here.
        if(this.isEmpty())
        return -1;
        int x=q[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        front = (front+1)%size;
        return x;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    public int popRear() 
    {
        // Write your code here.
        if(this.isEmpty())
            return -1;
        int  x = q[rear];
        rear=(rear-1)%size;
        return x;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    public int getFront() 
    {
        // Write your code here.
        
        if(isEmpty())
            return -1;
        return q[front];
        
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    public int getRear() 
    {
        // Write your code here.
        if(isEmpty())
            return -1;
        return q[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    public boolean isEmpty() 
    {
        // Write your code here.
        if(front == -1)
        return true;
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    public boolean isFull() 
    {
        // Write your code here.
        if((rear+1)%size==front)
        return true;
        return false;
    }
}