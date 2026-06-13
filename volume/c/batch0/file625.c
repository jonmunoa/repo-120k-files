// fichero 625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro625;

Registro625 crear_registro625(int id) {
    Registro625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro625(Registro625 r) {
    return r.valor + r.id;
}
