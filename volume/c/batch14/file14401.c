// fichero 14401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14401;

Registro14401 crear_registro14401(int id) {
    Registro14401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14401(Registro14401 r) {
    return r.valor + r.id;
}
