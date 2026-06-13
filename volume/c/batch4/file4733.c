// fichero 4733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4733;

Registro4733 crear_registro4733(int id) {
    Registro4733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4733(Registro4733 r) {
    return r.valor + r.id;
}
