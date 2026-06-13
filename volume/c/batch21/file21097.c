// fichero 21097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21097;

Registro21097 crear_registro21097(int id) {
    Registro21097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21097(Registro21097 r) {
    return r.valor + r.id;
}
