// fichero 20081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20081;

Registro20081 crear_registro20081(int id) {
    Registro20081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20081(Registro20081 r) {
    return r.valor + r.id;
}
