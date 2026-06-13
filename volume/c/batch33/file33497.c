// fichero 33497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33497;

Registro33497 crear_registro33497(int id) {
    Registro33497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33497(Registro33497 r) {
    return r.valor + r.id;
}
