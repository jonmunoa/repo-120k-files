// fichero 48801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48801;

Registro48801 crear_registro48801(int id) {
    Registro48801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48801(Registro48801 r) {
    return r.valor + r.id;
}
