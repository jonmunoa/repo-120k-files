// fichero 15165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15165;

Registro15165 crear_registro15165(int id) {
    Registro15165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15165(Registro15165 r) {
    return r.valor + r.id;
}
