#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
constrxpr int LENGTH = 120;　　　　　       /*１行の文字数*/

static const std::FILE *program;         /*ソースファイル指定*/
static const std::FILE *out_compiler;　　/*コンパイラ出力*/
constexpr char line[LENGTH];　　　　     /*一行分のbuf*/
static int nextline = -1;               /*次に読む文字*/

char nextChar(){
    char ch;
    if (nextline==-1) {
        if (fgets(line,LENGTH,program) != NULL) {
           fputs(line,out_compiler);
           nextline = 0;
        } else {
            std::cout<<"end of file"<<std::endl;
            exit(1);
        }
    }
    if ((ch = line[LENGTH++]) == '\n') {
        nextline = -1;
        return ' ';
    }
    return ch;
}


sta1:                K = 0;
      if (charClassT[ch] == letter)   goto sta2;
   if (charClassT[ch] == digit)   goto sta3;
   if (charClassT[ch] == delimiter) goto sta4;
   error();
sta2: a[k++] = ch; ch = nextChar();
   if(charClassT[ch] == letter ||charClassT[ch] == digit)
       goto sta2;
   else
       goto sta3;
sta3:     ; 

