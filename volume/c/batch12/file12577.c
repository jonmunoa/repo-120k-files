// fichero 12577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12577;

Registro12577 crear_registro12577(int id) {
    Registro12577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12577(Registro12577 r) {
    return r.valor + r.id;
}
