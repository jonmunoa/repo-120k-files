// fichero 28473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28473;

Registro28473 crear_registro28473(int id) {
    Registro28473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28473(Registro28473 r) {
    return r.valor + r.id;
}
