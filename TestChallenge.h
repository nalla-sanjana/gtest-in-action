//Abstraction using Class Interface
// functionpointer
class INetworkAlerter{
public:
    virtual void alert(float celcius)=0;
};

int alertInCelciusFacade(float farenheit,INetworkAlerter *networkAlerterPtr);
