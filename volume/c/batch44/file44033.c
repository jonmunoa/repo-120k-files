// fichero 44033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44033;

Registro44033 crear_registro44033(int id) {
    Registro44033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44033(Registro44033 r) {
    return r.valor + r.id;
}
