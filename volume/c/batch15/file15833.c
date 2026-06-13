// fichero 15833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15833;

Registro15833 crear_registro15833(int id) {
    Registro15833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15833(Registro15833 r) {
    return r.valor + r.id;
}
