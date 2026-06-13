// fichero 5237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5237;

Registro5237 crear_registro5237(int id) {
    Registro5237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5237(Registro5237 r) {
    return r.valor + r.id;
}
