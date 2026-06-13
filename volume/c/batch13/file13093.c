// fichero 13093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13093;

Registro13093 crear_registro13093(int id) {
    Registro13093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13093(Registro13093 r) {
    return r.valor + r.id;
}
