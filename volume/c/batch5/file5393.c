// fichero 5393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5393;

Registro5393 crear_registro5393(int id) {
    Registro5393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5393(Registro5393 r) {
    return r.valor + r.id;
}
