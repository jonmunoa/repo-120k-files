// fichero 14105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14105;

Registro14105 crear_registro14105(int id) {
    Registro14105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14105(Registro14105 r) {
    return r.valor + r.id;
}
