// fichero 14913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14913;

Registro14913 crear_registro14913(int id) {
    Registro14913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14913(Registro14913 r) {
    return r.valor + r.id;
}
