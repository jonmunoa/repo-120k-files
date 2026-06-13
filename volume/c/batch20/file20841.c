// fichero 20841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20841;

Registro20841 crear_registro20841(int id) {
    Registro20841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20841(Registro20841 r) {
    return r.valor + r.id;
}
