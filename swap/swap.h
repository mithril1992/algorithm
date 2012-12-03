void swap(int a&, int b&)
{
	 b ^= a;
	 a ^= b;
	 b ^= a;
}