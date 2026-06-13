// fichero 13741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13741;

Registro13741 crear_registro13741(int id) {
    Registro13741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13741(Registro13741 r) {
    return r.valor + r.id;
}
