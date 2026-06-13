// fichero 13593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13593;

Registro13593 crear_registro13593(int id) {
    Registro13593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13593(Registro13593 r) {
    return r.valor + r.id;
}
