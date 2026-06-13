// fichero 13533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13533;

Registro13533 crear_registro13533(int id) {
    Registro13533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13533(Registro13533 r) {
    return r.valor + r.id;
}
