#include "parser.h"
#include "BackupHelper.h"
#include "RestoreHelper.h"

int main(int argc, char **argv){

    if(argc < 2){
        Usage();
        exit(0);
    }

    
    Paras paras;
    initConfig(paras);
    // TODO : parser
    doParaParser(argc, argv, paras);

    if(paras.backup){
        
        BackupHelper b_helper(paras);

        b_helper.doBackup();

        // TODO: 压缩，加密
    }
    else if(paras.restore){
        // TODO: 解压，解密

        // b_helper.doBackup();
        b_helper.gettype();
        b_helper.doFilter();
        
    }
}

