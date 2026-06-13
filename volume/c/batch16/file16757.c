// fichero 16757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16757;

Registro16757 crear_registro16757(int id) {
    Registro16757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16757(Registro16757 r) {
    return r.valor + r.id;
}
