// fichero 16405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16405;

Registro16405 crear_registro16405(int id) {
    Registro16405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16405(Registro16405 r) {
    return r.valor + r.id;
}
