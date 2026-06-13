// fichero 18261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18261;

Registro18261 crear_registro18261(int id) {
    Registro18261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18261(Registro18261 r) {
    return r.valor + r.id;
}
