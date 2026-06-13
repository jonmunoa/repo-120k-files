// fichero 26193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26193;

Registro26193 crear_registro26193(int id) {
    Registro26193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26193(Registro26193 r) {
    return r.valor + r.id;
}
