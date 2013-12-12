#ifndef RICHARDSFLUXJUMPINDICATOR_H
#define RICHARDSFLUXJUMPINDICATOR_H

#include "JumpIndicator.h"

class RichardsFluxJumpIndicator;

template<>
InputParameters validParams<RichardsFluxJumpIndicator>();

class RichardsFluxJumpIndicator :
  public JumpIndicator
{
public:
  RichardsFluxJumpIndicator(const std::string & name, InputParameters parameters);
  virtual ~RichardsFluxJumpIndicator(){};

protected:

  virtual Real computeQpIntegral();

  unsigned int _this_var_num;
  MaterialProperty<std::vector<unsigned int> > &_p_var_nums;

  MaterialProperty<std::vector<Real> > &_density;
  MaterialProperty<std::vector<Real> > &_rel_perm;
  MaterialProperty<RealVectorValue> &_gravity;
  MaterialProperty<RealTensorValue> & _permeability;

  MaterialProperty<std::vector<Real> > &_density_n;
  MaterialProperty<std::vector<Real> > &_rel_perm_n;
  MaterialProperty<RealVectorValue> &_gravity_n;
  MaterialProperty<RealTensorValue> & _permeability_n;
};

#endif /* RICHARDSFLUXJUMPINDICATOR_H */
