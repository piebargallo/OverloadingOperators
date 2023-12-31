import memory_demo;

int main()
{
	MemoryDemo* mem{ new MemoryDemo{} };
	delete mem;

	mem = new MemoryDemo[10];
	delete[] mem;

	mem = new (std::nothrow) MemoryDemo{};
	delete mem;

	mem = new (std::nothrow) MemoryDemo[10];
	delete[] mem;

	MemoryDemo* memp{ new(5) MemoryDemo{} };
	delete memp;
}
