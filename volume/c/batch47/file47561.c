// fichero 47561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47561;

Registro47561 crear_registro47561(int id) {
    Registro47561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47561(Registro47561 r) {
    return r.valor + r.id;
}
