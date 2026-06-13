// fichero 47269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47269;

Registro47269 crear_registro47269(int id) {
    Registro47269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47269(Registro47269 r) {
    return r.valor + r.id;
}
