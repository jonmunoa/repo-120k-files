// fichero 46541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46541;

Registro46541 crear_registro46541(int id) {
    Registro46541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46541(Registro46541 r) {
    return r.valor + r.id;
}
