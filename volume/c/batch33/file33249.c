// fichero 33249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33249;

Registro33249 crear_registro33249(int id) {
    Registro33249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33249(Registro33249 r) {
    return r.valor + r.id;
}
