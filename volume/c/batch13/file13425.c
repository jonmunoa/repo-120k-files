// fichero 13425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13425;

Registro13425 crear_registro13425(int id) {
    Registro13425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13425(Registro13425 r) {
    return r.valor + r.id;
}
