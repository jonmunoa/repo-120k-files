// fichero 20969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20969;

Registro20969 crear_registro20969(int id) {
    Registro20969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20969(Registro20969 r) {
    return r.valor + r.id;
}
