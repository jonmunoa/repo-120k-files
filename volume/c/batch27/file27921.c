// fichero 27921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27921;

Registro27921 crear_registro27921(int id) {
    Registro27921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27921(Registro27921 r) {
    return r.valor + r.id;
}
