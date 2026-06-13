// fichero 45153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45153;

Registro45153 crear_registro45153(int id) {
    Registro45153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45153(Registro45153 r) {
    return r.valor + r.id;
}
