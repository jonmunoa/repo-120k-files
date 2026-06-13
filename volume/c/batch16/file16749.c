// fichero 16749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16749;

Registro16749 crear_registro16749(int id) {
    Registro16749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16749(Registro16749 r) {
    return r.valor + r.id;
}
