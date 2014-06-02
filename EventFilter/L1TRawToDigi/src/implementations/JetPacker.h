#include "EventFilter/L1TRawToDigi/interface/PackerFactory.h"

namespace l1t {
   class JetPackerFactory : public PackerFactory {
      public:
         virtual PackerList create(const edm::ParameterSet& cfg, const unsigned& fw, const int fedid) override;
   };
}
