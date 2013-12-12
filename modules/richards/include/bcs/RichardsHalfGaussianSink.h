#ifndef RICHARDSHALFGAUSSIANSINK
#define RICHARDSHALFGAUSSIANSINK

#include "IntegratedBC.h"

// Forward Declarations
class RichardsHalfGaussianSink;

template<>
InputParameters validParams<RichardsHalfGaussianSink>();

class RichardsHalfGaussianSink : public IntegratedBC
{
public:

  RichardsHalfGaussianSink(const std::string & name,
                        InputParameters parameters);

protected:
  virtual Real computeQpResidual();

  virtual Real computeQpJacobian();

  Real _maximum;
  Real _sd;
  Real _centre;
};

#endif //RICHARDSHALFGAUSSIANSINK
