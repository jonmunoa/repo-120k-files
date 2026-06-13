// fichero 38037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38037;

Registro38037 crear_registro38037(int id) {
    Registro38037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38037(Registro38037 r) {
    return r.valor + r.id;
}
