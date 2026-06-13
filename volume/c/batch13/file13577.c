// fichero 13577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13577;

Registro13577 crear_registro13577(int id) {
    Registro13577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13577(Registro13577 r) {
    return r.valor + r.id;
}
