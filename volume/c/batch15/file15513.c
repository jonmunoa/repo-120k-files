// fichero 15513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15513;

Registro15513 crear_registro15513(int id) {
    Registro15513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15513(Registro15513 r) {
    return r.valor + r.id;
}
