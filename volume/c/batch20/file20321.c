// fichero 20321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20321;

Registro20321 crear_registro20321(int id) {
    Registro20321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20321(Registro20321 r) {
    return r.valor + r.id;
}
