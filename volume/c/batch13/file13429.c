// fichero 13429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13429;

Registro13429 crear_registro13429(int id) {
    Registro13429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13429(Registro13429 r) {
    return r.valor + r.id;
}
