// fichero 32125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32125;

Registro32125 crear_registro32125(int id) {
    Registro32125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32125(Registro32125 r) {
    return r.valor + r.id;
}
