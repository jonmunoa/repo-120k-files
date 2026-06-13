// fichero 4893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4893;

Registro4893 crear_registro4893(int id) {
    Registro4893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4893(Registro4893 r) {
    return r.valor + r.id;
}
