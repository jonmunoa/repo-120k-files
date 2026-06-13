// fichero 31885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31885;

Registro31885 crear_registro31885(int id) {
    Registro31885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31885(Registro31885 r) {
    return r.valor + r.id;
}
