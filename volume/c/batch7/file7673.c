// fichero 7673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7673;

Registro7673 crear_registro7673(int id) {
    Registro7673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7673(Registro7673 r) {
    return r.valor + r.id;
}
