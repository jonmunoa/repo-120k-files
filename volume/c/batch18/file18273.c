// fichero 18273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18273;

Registro18273 crear_registro18273(int id) {
    Registro18273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18273(Registro18273 r) {
    return r.valor + r.id;
}
