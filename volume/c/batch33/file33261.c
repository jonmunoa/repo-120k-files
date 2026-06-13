// fichero 33261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33261;

Registro33261 crear_registro33261(int id) {
    Registro33261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33261(Registro33261 r) {
    return r.valor + r.id;
}
