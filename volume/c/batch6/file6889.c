// fichero 6889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6889;

Registro6889 crear_registro6889(int id) {
    Registro6889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6889(Registro6889 r) {
    return r.valor + r.id;
}
