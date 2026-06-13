// fichero 34377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34377;

Registro34377 crear_registro34377(int id) {
    Registro34377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34377(Registro34377 r) {
    return r.valor + r.id;
}
