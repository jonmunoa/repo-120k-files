// fichero 13613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13613;

Registro13613 crear_registro13613(int id) {
    Registro13613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13613(Registro13613 r) {
    return r.valor + r.id;
}
