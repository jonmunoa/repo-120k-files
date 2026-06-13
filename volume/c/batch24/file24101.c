// fichero 24101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24101;

Registro24101 crear_registro24101(int id) {
    Registro24101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24101(Registro24101 r) {
    return r.valor + r.id;
}
