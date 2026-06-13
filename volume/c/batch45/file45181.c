// fichero 45181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45181;

Registro45181 crear_registro45181(int id) {
    Registro45181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45181(Registro45181 r) {
    return r.valor + r.id;
}
