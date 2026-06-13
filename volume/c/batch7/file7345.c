// fichero 7345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7345;

Registro7345 crear_registro7345(int id) {
    Registro7345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7345(Registro7345 r) {
    return r.valor + r.id;
}
