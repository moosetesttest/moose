#ifndef SWITCHINGFUNCTIONMATERIAL_H
#define SWITCHINGFUNCTIONMATERIAL_H

#include "OrderParameterFunctionMaterial.h"

// Forward Declarations
class SwitchingFunctionMaterial;

template<>
InputParameters validParams<SwitchingFunctionMaterial>();

/**
 * Material class to provide the switching function \f$ h(\eta) \f$ for
 * the KKS system.
 *
 * \see KKSPhaseChemicalPotential
 * \see KKSCHBulk
 */
class SwitchingFunctionMaterial : public OrderParameterFunctionMaterial
{
public:
  SwitchingFunctionMaterial(const std::string & name,
                            InputParameters parameters);

protected:
  virtual void computeQpProperties();

  /// Polynomial order of the switching function \f$ h(\eta) \f$
  MooseEnum _h_order;
};

#endif //SWITCHINGFUNCTIONMATERIAL_H
