// fichero 46533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46533;

Registro46533 crear_registro46533(int id) {
    Registro46533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46533(Registro46533 r) {
    return r.valor + r.id;
}
