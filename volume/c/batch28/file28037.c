// fichero 28037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28037;

Registro28037 crear_registro28037(int id) {
    Registro28037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28037(Registro28037 r) {
    return r.valor + r.id;
}
