// fichero 33333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33333;

Registro33333 crear_registro33333(int id) {
    Registro33333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33333(Registro33333 r) {
    return r.valor + r.id;
}
