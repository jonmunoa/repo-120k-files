// fichero 15353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15353;

Registro15353 crear_registro15353(int id) {
    Registro15353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15353(Registro15353 r) {
    return r.valor + r.id;
}
