// fichero 357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro357;

Registro357 crear_registro357(int id) {
    Registro357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro357(Registro357 r) {
    return r.valor + r.id;
}
