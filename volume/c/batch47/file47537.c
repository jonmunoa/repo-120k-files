// fichero 47537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47537;

Registro47537 crear_registro47537(int id) {
    Registro47537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47537(Registro47537 r) {
    return r.valor + r.id;
}
