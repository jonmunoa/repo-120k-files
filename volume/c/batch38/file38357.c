// fichero 38357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38357;

Registro38357 crear_registro38357(int id) {
    Registro38357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38357(Registro38357 r) {
    return r.valor + r.id;
}
