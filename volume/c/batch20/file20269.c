// fichero 20269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20269;

Registro20269 crear_registro20269(int id) {
    Registro20269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20269(Registro20269 r) {
    return r.valor + r.id;
}
