// fichero 16249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16249;

Registro16249 crear_registro16249(int id) {
    Registro16249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16249(Registro16249 r) {
    return r.valor + r.id;
}
