// fichero 47253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47253;

Registro47253 crear_registro47253(int id) {
    Registro47253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47253(Registro47253 r) {
    return r.valor + r.id;
}
