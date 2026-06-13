// fichero 4065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4065;

Registro4065 crear_registro4065(int id) {
    Registro4065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4065(Registro4065 r) {
    return r.valor + r.id;
}
