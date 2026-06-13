// fichero 16889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16889;

Registro16889 crear_registro16889(int id) {
    Registro16889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16889(Registro16889 r) {
    return r.valor + r.id;
}
