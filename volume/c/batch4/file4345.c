// fichero 4345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4345;

Registro4345 crear_registro4345(int id) {
    Registro4345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4345(Registro4345 r) {
    return r.valor + r.id;
}
