// fichero 47189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47189;

Registro47189 crear_registro47189(int id) {
    Registro47189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47189(Registro47189 r) {
    return r.valor + r.id;
}
