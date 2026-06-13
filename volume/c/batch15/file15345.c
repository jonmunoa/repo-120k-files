// fichero 15345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15345;

Registro15345 crear_registro15345(int id) {
    Registro15345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15345(Registro15345 r) {
    return r.valor + r.id;
}
