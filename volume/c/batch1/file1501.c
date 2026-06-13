// fichero 1501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1501;

Registro1501 crear_registro1501(int id) {
    Registro1501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1501(Registro1501 r) {
    return r.valor + r.id;
}
