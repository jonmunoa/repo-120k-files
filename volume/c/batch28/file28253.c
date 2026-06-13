// fichero 28253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28253;

Registro28253 crear_registro28253(int id) {
    Registro28253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28253(Registro28253 r) {
    return r.valor + r.id;
}
