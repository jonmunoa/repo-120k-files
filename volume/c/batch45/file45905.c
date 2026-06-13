// fichero 45905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45905;

Registro45905 crear_registro45905(int id) {
    Registro45905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45905(Registro45905 r) {
    return r.valor + r.id;
}
