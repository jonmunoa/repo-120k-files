// fichero 18237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18237;

Registro18237 crear_registro18237(int id) {
    Registro18237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18237(Registro18237 r) {
    return r.valor + r.id;
}
