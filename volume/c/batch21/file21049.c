// fichero 21049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21049;

Registro21049 crear_registro21049(int id) {
    Registro21049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21049(Registro21049 r) {
    return r.valor + r.id;
}
