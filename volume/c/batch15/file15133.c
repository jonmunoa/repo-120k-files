// fichero 15133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15133;

Registro15133 crear_registro15133(int id) {
    Registro15133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15133(Registro15133 r) {
    return r.valor + r.id;
}
