// fichero 13073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13073;

Registro13073 crear_registro13073(int id) {
    Registro13073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13073(Registro13073 r) {
    return r.valor + r.id;
}
