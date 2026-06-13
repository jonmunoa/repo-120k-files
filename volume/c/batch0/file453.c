// fichero 453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro453;

Registro453 crear_registro453(int id) {
    Registro453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro453(Registro453 r) {
    return r.valor + r.id;
}
