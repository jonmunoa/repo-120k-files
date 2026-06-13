// fichero 4093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4093;

Registro4093 crear_registro4093(int id) {
    Registro4093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4093(Registro4093 r) {
    return r.valor + r.id;
}
