// fichero 29105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29105;

Registro29105 crear_registro29105(int id) {
    Registro29105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29105(Registro29105 r) {
    return r.valor + r.id;
}
