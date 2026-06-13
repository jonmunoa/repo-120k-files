// fichero 38289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38289;

Registro38289 crear_registro38289(int id) {
    Registro38289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38289(Registro38289 r) {
    return r.valor + r.id;
}
