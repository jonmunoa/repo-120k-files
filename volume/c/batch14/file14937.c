// fichero 14937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14937;

Registro14937 crear_registro14937(int id) {
    Registro14937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14937(Registro14937 r) {
    return r.valor + r.id;
}
