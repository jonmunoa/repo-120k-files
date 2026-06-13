// fichero 16345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16345;

Registro16345 crear_registro16345(int id) {
    Registro16345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16345(Registro16345 r) {
    return r.valor + r.id;
}
