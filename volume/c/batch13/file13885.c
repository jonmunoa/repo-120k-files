// fichero 13885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13885;

Registro13885 crear_registro13885(int id) {
    Registro13885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13885(Registro13885 r) {
    return r.valor + r.id;
}
