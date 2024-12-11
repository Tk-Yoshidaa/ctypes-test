import ctypes
import sys

if __name__ == '__main__':

    libc = ctypes.cdll.LoadLibrary("main.dylib")

    libc.get_vector_data.argtypes = [ctypes.POINTER(ctypes.c_size_t), ctypes.c_int]
    libc.get_vector_data.restype = ctypes.POINTER(ctypes.c_int)

    n = ctypes.c_size_t()
    vec = libc.get_vector_data(n, int(sys.argv[1]))
    print([vec[i] for i in range(n.value)])

    libc.free_vector_data.argtypes = [ctypes.POINTER(ctypes.c_int)]
    libc.free_vector_data(vec)