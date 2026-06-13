// fichero 20541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20541;

Registro20541 crear_registro20541(int id) {
    Registro20541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20541(Registro20541 r) {
    return r.valor + r.id;
}
