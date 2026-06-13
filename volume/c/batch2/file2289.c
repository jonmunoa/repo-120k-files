// fichero 2289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2289;

Registro2289 crear_registro2289(int id) {
    Registro2289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2289(Registro2289 r) {
    return r.valor + r.id;
}
