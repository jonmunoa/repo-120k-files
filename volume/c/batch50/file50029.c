// fichero 50029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50029;

Registro50029 crear_registro50029(int id) {
    Registro50029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50029(Registro50029 r) {
    return r.valor + r.id;
}
