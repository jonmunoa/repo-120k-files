// fichero 33561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33561;

Registro33561 crear_registro33561(int id) {
    Registro33561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33561(Registro33561 r) {
    return r.valor + r.id;
}
