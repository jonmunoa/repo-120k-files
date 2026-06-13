// fichero 15933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15933;

Registro15933 crear_registro15933(int id) {
    Registro15933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15933(Registro15933 r) {
    return r.valor + r.id;
}
