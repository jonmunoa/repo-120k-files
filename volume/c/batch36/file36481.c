// fichero 36481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36481;

Registro36481 crear_registro36481(int id) {
    Registro36481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36481(Registro36481 r) {
    return r.valor + r.id;
}
