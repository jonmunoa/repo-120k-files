// fichero 47441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47441;

Registro47441 crear_registro47441(int id) {
    Registro47441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47441(Registro47441 r) {
    return r.valor + r.id;
}
