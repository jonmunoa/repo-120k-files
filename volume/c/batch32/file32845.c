// fichero 32845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32845;

Registro32845 crear_registro32845(int id) {
    Registro32845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32845(Registro32845 r) {
    return r.valor + r.id;
}
