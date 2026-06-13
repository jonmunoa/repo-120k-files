// fichero 39673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39673;

Registro39673 crear_registro39673(int id) {
    Registro39673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39673(Registro39673 r) {
    return r.valor + r.id;
}
