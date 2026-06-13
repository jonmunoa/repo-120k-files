// fichero 33169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33169;

Registro33169 crear_registro33169(int id) {
    Registro33169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33169(Registro33169 r) {
    return r.valor + r.id;
}
