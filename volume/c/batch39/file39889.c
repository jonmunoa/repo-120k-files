// fichero 39889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39889;

Registro39889 crear_registro39889(int id) {
    Registro39889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39889(Registro39889 r) {
    return r.valor + r.id;
}
