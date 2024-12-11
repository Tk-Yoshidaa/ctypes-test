import ctypes

if __name__ == '__main__':

    libc = ctypes.cdll.LoadLibrary("main.dylib")
    libc.main()

    libc.hello()
    libc.hello2("ctypes") ## char * で受けると一文字だけ表示される
    libc.hello2("ctypes".encode('utf-8')) ## bytesならOK
    libc.hello3("ctypes") ## std::string で受けると何も表示されない
    libc.hello3("ctypes".encode('utf-8')) ## bytesでもNG
    libc.hello4(5) ## 数字はOK