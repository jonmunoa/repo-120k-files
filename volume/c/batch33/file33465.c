// fichero 33465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33465;

Registro33465 crear_registro33465(int id) {
    Registro33465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33465(Registro33465 r) {
    return r.valor + r.id;
}
