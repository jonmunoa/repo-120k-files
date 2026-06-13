// fichero 4197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4197;

Registro4197 crear_registro4197(int id) {
    Registro4197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4197(Registro4197 r) {
    return r.valor + r.id;
}
