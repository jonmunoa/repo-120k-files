// fichero 21729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21729;

Registro21729 crear_registro21729(int id) {
    Registro21729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21729(Registro21729 r) {
    return r.valor + r.id;
}
