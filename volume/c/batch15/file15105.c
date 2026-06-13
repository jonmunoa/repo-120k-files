// fichero 15105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15105;

Registro15105 crear_registro15105(int id) {
    Registro15105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15105(Registro15105 r) {
    return r.valor + r.id;
}
