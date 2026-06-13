// fichero 45169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45169;

Registro45169 crear_registro45169(int id) {
    Registro45169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45169(Registro45169 r) {
    return r.valor + r.id;
}
