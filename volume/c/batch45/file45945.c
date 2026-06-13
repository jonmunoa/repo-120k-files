// fichero 45945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45945;

Registro45945 crear_registro45945(int id) {
    Registro45945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45945(Registro45945 r) {
    return r.valor + r.id;
}
