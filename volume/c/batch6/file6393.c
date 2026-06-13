// fichero 6393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6393;

Registro6393 crear_registro6393(int id) {
    Registro6393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6393(Registro6393 r) {
    return r.valor + r.id;
}
