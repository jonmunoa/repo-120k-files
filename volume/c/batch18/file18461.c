// fichero 18461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18461;

Registro18461 crear_registro18461(int id) {
    Registro18461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18461(Registro18461 r) {
    return r.valor + r.id;
}
