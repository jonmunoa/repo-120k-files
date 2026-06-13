// fichero 45861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45861;

Registro45861 crear_registro45861(int id) {
    Registro45861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45861(Registro45861 r) {
    return r.valor + r.id;
}
