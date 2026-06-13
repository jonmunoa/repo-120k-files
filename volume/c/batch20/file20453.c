// fichero 20453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20453;

Registro20453 crear_registro20453(int id) {
    Registro20453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20453(Registro20453 r) {
    return r.valor + r.id;
}
