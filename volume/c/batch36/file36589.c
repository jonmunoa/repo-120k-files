// fichero 36589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36589;

Registro36589 crear_registro36589(int id) {
    Registro36589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36589(Registro36589 r) {
    return r.valor + r.id;
}
