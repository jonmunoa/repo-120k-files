// fichero 19673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19673;

Registro19673 crear_registro19673(int id) {
    Registro19673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19673(Registro19673 r) {
    return r.valor + r.id;
}
