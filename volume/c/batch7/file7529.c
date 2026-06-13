// fichero 7529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7529;

Registro7529 crear_registro7529(int id) {
    Registro7529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7529(Registro7529 r) {
    return r.valor + r.id;
}
