// fichero 33105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33105;

Registro33105 crear_registro33105(int id) {
    Registro33105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33105(Registro33105 r) {
    return r.valor + r.id;
}
