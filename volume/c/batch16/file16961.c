// fichero 16961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16961;

Registro16961 crear_registro16961(int id) {
    Registro16961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16961(Registro16961 r) {
    return r.valor + r.id;
}
