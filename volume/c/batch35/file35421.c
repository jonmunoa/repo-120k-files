// fichero 35421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35421;

Registro35421 crear_registro35421(int id) {
    Registro35421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35421(Registro35421 r) {
    return r.valor + r.id;
}
