// fichero 21029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21029;

Registro21029 crear_registro21029(int id) {
    Registro21029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21029(Registro21029 r) {
    return r.valor + r.id;
}
