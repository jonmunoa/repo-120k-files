// fichero 24861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24861;

Registro24861 crear_registro24861(int id) {
    Registro24861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24861(Registro24861 r) {
    return r.valor + r.id;
}
