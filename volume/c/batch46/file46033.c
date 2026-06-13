// fichero 46033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46033;

Registro46033 crear_registro46033(int id) {
    Registro46033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46033(Registro46033 r) {
    return r.valor + r.id;
}
