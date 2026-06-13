// fichero 21473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21473;

Registro21473 crear_registro21473(int id) {
    Registro21473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21473(Registro21473 r) {
    return r.valor + r.id;
}
