// fichero 33517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33517;

Registro33517 crear_registro33517(int id) {
    Registro33517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33517(Registro33517 r) {
    return r.valor + r.id;
}
