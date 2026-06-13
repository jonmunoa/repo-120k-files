// fichero 45665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45665;

Registro45665 crear_registro45665(int id) {
    Registro45665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45665(Registro45665 r) {
    return r.valor + r.id;
}
