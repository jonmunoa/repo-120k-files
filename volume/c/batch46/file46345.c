// fichero 46345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46345;

Registro46345 crear_registro46345(int id) {
    Registro46345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46345(Registro46345 r) {
    return r.valor + r.id;
}
