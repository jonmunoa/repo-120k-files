// fichero 16785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16785;

Registro16785 crear_registro16785(int id) {
    Registro16785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16785(Registro16785 r) {
    return r.valor + r.id;
}
