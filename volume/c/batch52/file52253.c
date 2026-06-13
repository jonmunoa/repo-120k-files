// fichero 52253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52253;

Registro52253 crear_registro52253(int id) {
    Registro52253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52253(Registro52253 r) {
    return r.valor + r.id;
}
