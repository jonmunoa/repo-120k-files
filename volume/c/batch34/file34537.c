// fichero 34537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34537;

Registro34537 crear_registro34537(int id) {
    Registro34537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34537(Registro34537 r) {
    return r.valor + r.id;
}
