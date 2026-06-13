// fichero 4249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4249;

Registro4249 crear_registro4249(int id) {
    Registro4249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4249(Registro4249 r) {
    return r.valor + r.id;
}
