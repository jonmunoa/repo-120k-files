// fichero 15517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15517;

Registro15517 crear_registro15517(int id) {
    Registro15517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15517(Registro15517 r) {
    return r.valor + r.id;
}
