// fichero 15065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15065;

Registro15065 crear_registro15065(int id) {
    Registro15065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15065(Registro15065 r) {
    return r.valor + r.id;
}
