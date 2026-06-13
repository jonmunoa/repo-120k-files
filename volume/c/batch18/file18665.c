// fichero 18665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18665;

Registro18665 crear_registro18665(int id) {
    Registro18665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18665(Registro18665 r) {
    return r.valor + r.id;
}
