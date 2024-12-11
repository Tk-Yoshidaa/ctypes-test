import ctypes

if __name__ == '__main__':

    libc = ctypes.cdll.LoadLibrary("main.dylib")
    libc.main()

    libc.hello()