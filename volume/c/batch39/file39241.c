// fichero 39241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39241;

Registro39241 crear_registro39241(int id) {
    Registro39241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39241(Registro39241 r) {
    return r.valor + r.id;
}
