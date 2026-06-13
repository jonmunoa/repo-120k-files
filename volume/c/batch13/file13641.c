// fichero 13641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13641;

Registro13641 crear_registro13641(int id) {
    Registro13641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13641(Registro13641 r) {
    return r.valor + r.id;
}
