// fichero 5269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5269;

Registro5269 crear_registro5269(int id) {
    Registro5269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5269(Registro5269 r) {
    return r.valor + r.id;
}
