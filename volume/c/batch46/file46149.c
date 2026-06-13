// fichero 46149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46149;

Registro46149 crear_registro46149(int id) {
    Registro46149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46149(Registro46149 r) {
    return r.valor + r.id;
}
