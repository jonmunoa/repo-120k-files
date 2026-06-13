// fichero 6101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6101;

Registro6101 crear_registro6101(int id) {
    Registro6101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6101(Registro6101 r) {
    return r.valor + r.id;
}
