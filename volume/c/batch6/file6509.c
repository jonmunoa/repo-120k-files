// fichero 6509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6509;

Registro6509 crear_registro6509(int id) {
    Registro6509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6509(Registro6509 r) {
    return r.valor + r.id;
}
