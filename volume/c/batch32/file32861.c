// fichero 32861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32861;

Registro32861 crear_registro32861(int id) {
    Registro32861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32861(Registro32861 r) {
    return r.valor + r.id;
}
