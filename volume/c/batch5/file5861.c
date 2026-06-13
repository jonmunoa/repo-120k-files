// fichero 5861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5861;

Registro5861 crear_registro5861(int id) {
    Registro5861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5861(Registro5861 r) {
    return r.valor + r.id;
}
