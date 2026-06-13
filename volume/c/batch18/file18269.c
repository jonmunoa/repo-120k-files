// fichero 18269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18269;

Registro18269 crear_registro18269(int id) {
    Registro18269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18269(Registro18269 r) {
    return r.valor + r.id;
}
