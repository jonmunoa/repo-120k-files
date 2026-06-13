// fichero 245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro245;

Registro245 crear_registro245(int id) {
    Registro245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro245(Registro245 r) {
    return r.valor + r.id;
}
