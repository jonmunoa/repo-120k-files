// fichero 18037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18037;

Registro18037 crear_registro18037(int id) {
    Registro18037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18037(Registro18037 r) {
    return r.valor + r.id;
}
