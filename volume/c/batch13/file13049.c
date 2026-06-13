// fichero 13049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13049;

Registro13049 crear_registro13049(int id) {
    Registro13049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13049(Registro13049 r) {
    return r.valor + r.id;
}
