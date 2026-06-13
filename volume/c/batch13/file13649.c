// fichero 13649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13649;

Registro13649 crear_registro13649(int id) {
    Registro13649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13649(Registro13649 r) {
    return r.valor + r.id;
}
