// fichero 48193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48193;

Registro48193 crear_registro48193(int id) {
    Registro48193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48193(Registro48193 r) {
    return r.valor + r.id;
}
