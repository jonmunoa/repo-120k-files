// fichero 50973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50973;

Registro50973 crear_registro50973(int id) {
    Registro50973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50973(Registro50973 r) {
    return r.valor + r.id;
}
