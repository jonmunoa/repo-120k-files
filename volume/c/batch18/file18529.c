// fichero 18529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18529;

Registro18529 crear_registro18529(int id) {
    Registro18529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18529(Registro18529 r) {
    return r.valor + r.id;
}
