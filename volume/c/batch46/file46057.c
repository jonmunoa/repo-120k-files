// fichero 46057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46057;

Registro46057 crear_registro46057(int id) {
    Registro46057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46057(Registro46057 r) {
    return r.valor + r.id;
}
