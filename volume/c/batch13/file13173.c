// fichero 13173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13173;

Registro13173 crear_registro13173(int id) {
    Registro13173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13173(Registro13173 r) {
    return r.valor + r.id;
}
