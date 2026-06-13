// fichero 19065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19065;

Registro19065 crear_registro19065(int id) {
    Registro19065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19065(Registro19065 r) {
    return r.valor + r.id;
}
