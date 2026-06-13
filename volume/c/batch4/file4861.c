// fichero 4861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4861;

Registro4861 crear_registro4861(int id) {
    Registro4861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4861(Registro4861 r) {
    return r.valor + r.id;
}
