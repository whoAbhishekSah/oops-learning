//LinkedList class header file

class LinkedList
{
  private:
    int x = 10;
    void justRandomPrivateMethod(int y);
  public:
    LinkedList(int x);
    void insertAtFront(int x);
    void insertAtEnd(int x);
    void deleteFirst(int x);
    void deleteLast(int x);
    bool checkElementExist(int x);
};

//interface is always the public methods


