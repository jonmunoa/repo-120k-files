// fichero 6453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6453;

Registro6453 crear_registro6453(int id) {
    Registro6453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6453(Registro6453 r) {
    return r.valor + r.id;
}
