// fichero 13517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13517;

Registro13517 crear_registro13517(int id) {
    Registro13517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13517(Registro13517 r) {
    return r.valor + r.id;
}
