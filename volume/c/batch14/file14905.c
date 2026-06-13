// fichero 14905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14905;

Registro14905 crear_registro14905(int id) {
    Registro14905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14905(Registro14905 r) {
    return r.valor + r.id;
}
