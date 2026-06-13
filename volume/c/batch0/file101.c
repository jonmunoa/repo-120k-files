// fichero 101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro101;

Registro101 crear_registro101(int id) {
    Registro101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro101(Registro101 r) {
    return r.valor + r.id;
}
