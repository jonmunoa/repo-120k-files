// fichero 22741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22741;

Registro22741 crear_registro22741(int id) {
    Registro22741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22741(Registro22741 r) {
    return r.valor + r.id;
}
