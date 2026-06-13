// fichero 13861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13861;

Registro13861 crear_registro13861(int id) {
    Registro13861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13861(Registro13861 r) {
    return r.valor + r.id;
}
