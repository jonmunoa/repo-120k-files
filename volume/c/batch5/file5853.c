// fichero 5853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5853;

Registro5853 crear_registro5853(int id) {
    Registro5853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5853(Registro5853 r) {
    return r.valor + r.id;
}
