// fichero 45549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45549;

Registro45549 crear_registro45549(int id) {
    Registro45549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45549(Registro45549 r) {
    return r.valor + r.id;
}
