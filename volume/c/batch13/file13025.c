// fichero 13025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13025;

Registro13025 crear_registro13025(int id) {
    Registro13025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13025(Registro13025 r) {
    return r.valor + r.id;
}
