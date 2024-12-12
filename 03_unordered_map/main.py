import ctypes
import sys

if __name__ == '__main__':

    libc = ctypes.cdll.LoadLibrary("main.dylib")
    libc.get_unordered_map.restype = ctypes.c_void_p
    libc.print_unordered_map.argtypes = [ctypes.c_void_p]
    libc.get.argtypes = [ctypes.c_void_p, ctypes.c_char_p]
    libc.get.restype = ctypes.c_int

    mapping = libc.get_unordered_map()
    print(mapping)

    libc.print_unordered_map(mapping)

    print(libc.get(mapping, "CDF".encode('utf-8')))
    print(libc.get(mapping, "XYZ".encode('utf-8')))