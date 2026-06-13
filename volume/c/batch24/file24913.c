// fichero 24913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24913;

Registro24913 crear_registro24913(int id) {
    Registro24913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24913(Registro24913 r) {
    return r.valor + r.id;
}
