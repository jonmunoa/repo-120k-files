// fichero 16033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16033;

Registro16033 crear_registro16033(int id) {
    Registro16033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16033(Registro16033 r) {
    return r.valor + r.id;
}
