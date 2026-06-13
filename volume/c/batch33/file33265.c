// fichero 33265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33265;

Registro33265 crear_registro33265(int id) {
    Registro33265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33265(Registro33265 r) {
    return r.valor + r.id;
}
