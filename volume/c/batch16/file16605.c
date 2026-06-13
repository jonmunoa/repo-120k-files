// fichero 16605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16605;

Registro16605 crear_registro16605(int id) {
    Registro16605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16605(Registro16605 r) {
    return r.valor + r.id;
}
