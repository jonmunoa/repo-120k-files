// fichero 24733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24733;

Registro24733 crear_registro24733(int id) {
    Registro24733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24733(Registro24733 r) {
    return r.valor + r.id;
}
