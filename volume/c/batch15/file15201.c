// fichero 15201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15201;

Registro15201 crear_registro15201(int id) {
    Registro15201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15201(Registro15201 r) {
    return r.valor + r.id;
}
