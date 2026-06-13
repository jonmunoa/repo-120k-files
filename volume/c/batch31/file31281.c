// fichero 31281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31281;

Registro31281 crear_registro31281(int id) {
    Registro31281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31281(Registro31281 r) {
    return r.valor + r.id;
}
