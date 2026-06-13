// fichero 18189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18189;

Registro18189 crear_registro18189(int id) {
    Registro18189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18189(Registro18189 r) {
    return r.valor + r.id;
}
