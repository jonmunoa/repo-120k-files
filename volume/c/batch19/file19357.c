// fichero 19357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19357;

Registro19357 crear_registro19357(int id) {
    Registro19357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19357(Registro19357 r) {
    return r.valor + r.id;
}
