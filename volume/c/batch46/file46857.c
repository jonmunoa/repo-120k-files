// fichero 46857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46857;

Registro46857 crear_registro46857(int id) {
    Registro46857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46857(Registro46857 r) {
    return r.valor + r.id;
}
