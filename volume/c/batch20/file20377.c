// fichero 20377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20377;

Registro20377 crear_registro20377(int id) {
    Registro20377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20377(Registro20377 r) {
    return r.valor + r.id;
}
