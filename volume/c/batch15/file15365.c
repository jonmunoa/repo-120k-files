// fichero 15365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15365;

Registro15365 crear_registro15365(int id) {
    Registro15365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15365(Registro15365 r) {
    return r.valor + r.id;
}
