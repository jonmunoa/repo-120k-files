// fichero 48861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48861;

Registro48861 crear_registro48861(int id) {
    Registro48861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48861(Registro48861 r) {
    return r.valor + r.id;
}
