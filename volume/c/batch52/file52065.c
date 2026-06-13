// fichero 52065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52065;

Registro52065 crear_registro52065(int id) {
    Registro52065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52065(Registro52065 r) {
    return r.valor + r.id;
}
