// fichero 15805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15805;

Registro15805 crear_registro15805(int id) {
    Registro15805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15805(Registro15805 r) {
    return r.valor + r.id;
}
