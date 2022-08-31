#ifndef ReturnStatement_hpp
#define ReturnStatement_hpp

#include <vector>
#include <string>
#include <iostream>
#include <memory>

#include "ast/Node.hpp"
#include "ast/Context.hpp"

class ReturnStatement : public Node
{
public:
    ReturnStatement();
    ReturnStatement(NodePtr returnObject);
    ~ReturnStatement();
    void generateParser(std::ostream &dst, std::string indent) const override;
    void generateContext(ContextPtr frameContext, int parameterOffset, bool isGlobal  ) override;
    void generateMIPS(std::string indent, int destReg, ContextPtr frameContext) const override;
    void countFunctionParameter(int* functionCallParameterOffset) const override;
protected:
  ContextPtr blockContext;
};

#endif