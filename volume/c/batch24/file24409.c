// fichero 24409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24409;

Registro24409 crear_registro24409(int id) {
    Registro24409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24409(Registro24409 r) {
    return r.valor + r.id;
}
