// fichero 14245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14245;

Registro14245 crear_registro14245(int id) {
    Registro14245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14245(Registro14245 r) {
    return r.valor + r.id;
}
