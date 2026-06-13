// fichero 5521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5521;

Registro5521 crear_registro5521(int id) {
    Registro5521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5521(Registro5521 r) {
    return r.valor + r.id;
}
