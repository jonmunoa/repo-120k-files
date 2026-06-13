// fichero 39301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39301;

Registro39301 crear_registro39301(int id) {
    Registro39301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39301(Registro39301 r) {
    return r.valor + r.id;
}
