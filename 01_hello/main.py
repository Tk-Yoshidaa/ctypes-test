import ctypes

if __name__ == '__main__':

    libc = ctypes.cdll.LoadLibrary("main.dylib")
    libc.main()

    libc.hello()
    libc.hello2("ctypes") ## char ** で受けるとアドレスが表示される
    libc.hello3("ctypes") ## std::string で受けると何も表示されない
    libc.hellon(5) ## 数字はOK