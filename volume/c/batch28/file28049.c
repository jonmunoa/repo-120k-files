// fichero 28049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28049;

Registro28049 crear_registro28049(int id) {
    Registro28049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28049(Registro28049 r) {
    return r.valor + r.id;
}
