// fichero 15177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15177;

Registro15177 crear_registro15177(int id) {
    Registro15177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15177(Registro15177 r) {
    return r.valor + r.id;
}
