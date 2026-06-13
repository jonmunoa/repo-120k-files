// fichero 21829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21829;

Registro21829 crear_registro21829(int id) {
    Registro21829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21829(Registro21829 r) {
    return r.valor + r.id;
}
