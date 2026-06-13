// fichero 13653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13653;

Registro13653 crear_registro13653(int id) {
    Registro13653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13653(Registro13653 r) {
    return r.valor + r.id;
}
