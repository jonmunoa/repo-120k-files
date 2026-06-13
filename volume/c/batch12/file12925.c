// fichero 12925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12925;

Registro12925 crear_registro12925(int id) {
    Registro12925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12925(Registro12925 r) {
    return r.valor + r.id;
}
