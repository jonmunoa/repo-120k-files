// fichero 46509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46509;

Registro46509 crear_registro46509(int id) {
    Registro46509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46509(Registro46509 r) {
    return r.valor + r.id;
}
