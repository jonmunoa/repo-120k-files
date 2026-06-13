// fichero 15837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15837;

Registro15837 crear_registro15837(int id) {
    Registro15837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15837(Registro15837 r) {
    return r.valor + r.id;
}
