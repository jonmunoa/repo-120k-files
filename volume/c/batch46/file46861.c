// fichero 46861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46861;

Registro46861 crear_registro46861(int id) {
    Registro46861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46861(Registro46861 r) {
    return r.valor + r.id;
}
