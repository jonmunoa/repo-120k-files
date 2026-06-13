// fichero 50357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50357;

Registro50357 crear_registro50357(int id) {
    Registro50357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50357(Registro50357 r) {
    return r.valor + r.id;
}
