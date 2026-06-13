// fichero 16397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16397;

Registro16397 crear_registro16397(int id) {
    Registro16397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16397(Registro16397 r) {
    return r.valor + r.id;
}
