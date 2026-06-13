// fichero 8833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8833;

Registro8833 crear_registro8833(int id) {
    Registro8833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8833(Registro8833 r) {
    return r.valor + r.id;
}
