// fichero 35289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35289;

Registro35289 crear_registro35289(int id) {
    Registro35289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35289(Registro35289 r) {
    return r.valor + r.id;
}
