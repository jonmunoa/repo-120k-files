// fichero 44125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44125;

Registro44125 crear_registro44125(int id) {
    Registro44125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44125(Registro44125 r) {
    return r.valor + r.id;
}
