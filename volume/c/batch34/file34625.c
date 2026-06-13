// fichero 34625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34625;

Registro34625 crear_registro34625(int id) {
    Registro34625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34625(Registro34625 r) {
    return r.valor + r.id;
}
