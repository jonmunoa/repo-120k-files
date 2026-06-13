// fichero 6421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6421;

Registro6421 crear_registro6421(int id) {
    Registro6421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6421(Registro6421 r) {
    return r.valor + r.id;
}
