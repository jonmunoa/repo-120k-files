// fichero 16257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16257;

Registro16257 crear_registro16257(int id) {
    Registro16257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16257(Registro16257 r) {
    return r.valor + r.id;
}
