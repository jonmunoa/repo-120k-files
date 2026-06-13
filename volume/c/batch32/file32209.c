// fichero 32209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32209;

Registro32209 crear_registro32209(int id) {
    Registro32209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32209(Registro32209 r) {
    return r.valor + r.id;
}
