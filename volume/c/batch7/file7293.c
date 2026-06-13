// fichero 7293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7293;

Registro7293 crear_registro7293(int id) {
    Registro7293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7293(Registro7293 r) {
    return r.valor + r.id;
}
