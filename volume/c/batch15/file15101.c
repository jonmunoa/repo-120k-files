// fichero 15101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15101;

Registro15101 crear_registro15101(int id) {
    Registro15101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15101(Registro15101 r) {
    return r.valor + r.id;
}
