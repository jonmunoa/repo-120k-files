// fichero 15649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15649;

Registro15649 crear_registro15649(int id) {
    Registro15649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15649(Registro15649 r) {
    return r.valor + r.id;
}
