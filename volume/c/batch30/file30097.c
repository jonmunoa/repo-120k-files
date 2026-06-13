// fichero 30097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30097;

Registro30097 crear_registro30097(int id) {
    Registro30097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30097(Registro30097 r) {
    return r.valor + r.id;
}
