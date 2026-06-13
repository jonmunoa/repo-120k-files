// fichero 16565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16565;

Registro16565 crear_registro16565(int id) {
    Registro16565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16565(Registro16565 r) {
    return r.valor + r.id;
}
