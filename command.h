//
// Created by XUEGUANG MA on 2017-12-03.
//

#ifndef FINAL_COMMAND_H
#define FINAL_COMMAND_H

#include<string>
#include<map>
#include<memory>
#include <vector>

class Command{
    std::map<std::string,std::vector<std::string>>m;
public:
    void create_map();
    std::string getval(std::string first);
    void addkey(std::string first, std::vector<std::string>& v);
    std::map<std::string,std::vector<std::string>> return_map();
    void rename(std::string newname, std::string oldname);

};

void alonepush(std::vector<std::string>& v,std::string cmd,std::unique_ptr <Command> &commap);
std::string checksub(std::string cmd,std::unique_ptr <Command> &commap);

#endif



