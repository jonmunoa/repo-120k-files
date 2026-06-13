// fichero 15973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15973;

Registro15973 crear_registro15973(int id) {
    Registro15973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15973(Registro15973 r) {
    return r.valor + r.id;
}
