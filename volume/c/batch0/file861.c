// fichero 861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro861;

Registro861 crear_registro861(int id) {
    Registro861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro861(Registro861 r) {
    return r.valor + r.id;
}
