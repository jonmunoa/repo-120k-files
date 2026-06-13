// fichero 16497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16497;

Registro16497 crear_registro16497(int id) {
    Registro16497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16497(Registro16497 r) {
    return r.valor + r.id;
}
