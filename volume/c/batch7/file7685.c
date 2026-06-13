// fichero 7685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7685;

Registro7685 crear_registro7685(int id) {
    Registro7685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7685(Registro7685 r) {
    return r.valor + r.id;
}
