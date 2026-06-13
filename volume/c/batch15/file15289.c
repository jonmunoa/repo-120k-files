// fichero 15289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15289;

Registro15289 crear_registro15289(int id) {
    Registro15289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15289(Registro15289 r) {
    return r.valor + r.id;
}
