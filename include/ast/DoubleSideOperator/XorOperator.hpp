#ifndef XorOperator_hpp
#define XorOperator_hpp

#include "ast/Node.hpp"
#include "ast/Context.hpp"

class XorOperator : public Node
{
public:
  // Constructors
  XorOperator(NodePtr Left, NodePtr Right);

  // Destructor
  virtual ~XorOperator();

  // Visualising
  void generateParser(std::ostream &dst, std::string indent) const override;

  // MIPS
  void generateMIPS(std::string indent, int destReg, ContextPtr frameContext) const override;

  // Functions
  bool isAssignmentExp() const override;
  void countFunctionParameter(int* functionCallParameterOffset) const override;
  int getValue() const override;
  enum Specifier returnType() const override;

  // Context
  void generateContext(ContextPtr frameContext, int parameterOffset, bool isGlobal  ) override;

protected:
  ContextPtr blockContext;
  enum Specifier type;
};

#endif
