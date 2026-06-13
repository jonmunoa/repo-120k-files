// fichero 45249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45249;

Registro45249 crear_registro45249(int id) {
    Registro45249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45249(Registro45249 r) {
    return r.valor + r.id;
}
