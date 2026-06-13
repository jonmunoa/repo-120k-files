// fichero 16973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16973;

Registro16973 crear_registro16973(int id) {
    Registro16973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16973(Registro16973 r) {
    return r.valor + r.id;
}
