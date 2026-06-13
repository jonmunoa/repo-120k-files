// fichero 49473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49473;

Registro49473 crear_registro49473(int id) {
    Registro49473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49473(Registro49473 r) {
    return r.valor + r.id;
}
