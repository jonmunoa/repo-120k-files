// fichero 38685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38685;

Registro38685 crear_registro38685(int id) {
    Registro38685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38685(Registro38685 r) {
    return r.valor + r.id;
}
