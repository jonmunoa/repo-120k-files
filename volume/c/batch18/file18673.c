// fichero 18673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18673;

Registro18673 crear_registro18673(int id) {
    Registro18673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18673(Registro18673 r) {
    return r.valor + r.id;
}
