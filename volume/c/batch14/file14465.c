// fichero 14465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14465;

Registro14465 crear_registro14465(int id) {
    Registro14465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14465(Registro14465 r) {
    return r.valor + r.id;
}
