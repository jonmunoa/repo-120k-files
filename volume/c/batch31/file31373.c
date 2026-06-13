// fichero 31373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31373;

Registro31373 crear_registro31373(int id) {
    Registro31373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31373(Registro31373 r) {
    return r.valor + r.id;
}
