class SelectionSort{
    public:
        static void sort(int* _vector, int vector_size);
    private:
        static int max(int* _vector, int _start, int _end);
        static void swap(int* _vector, int _start, int _end);
};