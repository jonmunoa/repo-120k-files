// fichero 50865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50865;

Registro50865 crear_registro50865(int id) {
    Registro50865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50865(Registro50865 r) {
    return r.valor + r.id;
}
