// fichero 15453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15453;

Registro15453 crear_registro15453(int id) {
    Registro15453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15453(Registro15453 r) {
    return r.valor + r.id;
}
