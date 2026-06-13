// fichero 50045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50045;

Registro50045 crear_registro50045(int id) {
    Registro50045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50045(Registro50045 r) {
    return r.valor + r.id;
}
