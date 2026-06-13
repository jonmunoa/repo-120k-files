// fichero 46453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46453;

Registro46453 crear_registro46453(int id) {
    Registro46453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46453(Registro46453 r) {
    return r.valor + r.id;
}
