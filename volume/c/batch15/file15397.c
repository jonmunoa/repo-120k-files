// fichero 15397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15397;

Registro15397 crear_registro15397(int id) {
    Registro15397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15397(Registro15397 r) {
    return r.valor + r.id;
}
