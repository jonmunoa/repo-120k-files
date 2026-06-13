// fichero 7833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7833;

Registro7833 crear_registro7833(int id) {
    Registro7833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7833(Registro7833 r) {
    return r.valor + r.id;
}
