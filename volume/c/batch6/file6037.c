// fichero 6037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6037;

Registro6037 crear_registro6037(int id) {
    Registro6037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6037(Registro6037 r) {
    return r.valor + r.id;
}
