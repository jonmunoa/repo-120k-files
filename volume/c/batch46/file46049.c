// fichero 46049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46049;

Registro46049 crear_registro46049(int id) {
    Registro46049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46049(Registro46049 r) {
    return r.valor + r.id;
}
