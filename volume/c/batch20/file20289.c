// fichero 20289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20289;

Registro20289 crear_registro20289(int id) {
    Registro20289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20289(Registro20289 r) {
    return r.valor + r.id;
}
