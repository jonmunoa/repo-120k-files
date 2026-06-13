// fichero 15157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15157;

Registro15157 crear_registro15157(int id) {
    Registro15157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15157(Registro15157 r) {
    return r.valor + r.id;
}
