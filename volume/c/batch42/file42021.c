// fichero 42021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42021;

Registro42021 crear_registro42021(int id) {
    Registro42021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42021(Registro42021 r) {
    return r.valor + r.id;
}
