// fichero 13045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13045;

Registro13045 crear_registro13045(int id) {
    Registro13045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13045(Registro13045 r) {
    return r.valor + r.id;
}
