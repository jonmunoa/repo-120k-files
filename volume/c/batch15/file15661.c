// fichero 15661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15661;

Registro15661 crear_registro15661(int id) {
    Registro15661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15661(Registro15661 r) {
    return r.valor + r.id;
}
