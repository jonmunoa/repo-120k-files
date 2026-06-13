// fichero 32785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32785;

Registro32785 crear_registro32785(int id) {
    Registro32785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32785(Registro32785 r) {
    return r.valor + r.id;
}
