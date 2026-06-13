// fichero 33541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33541;

Registro33541 crear_registro33541(int id) {
    Registro33541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33541(Registro33541 r) {
    return r.valor + r.id;
}
