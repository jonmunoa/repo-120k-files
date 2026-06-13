// fichero 16385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16385;

Registro16385 crear_registro16385(int id) {
    Registro16385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16385(Registro16385 r) {
    return r.valor + r.id;
}
