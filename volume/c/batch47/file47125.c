// fichero 47125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47125;

Registro47125 crear_registro47125(int id) {
    Registro47125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47125(Registro47125 r) {
    return r.valor + r.id;
}
