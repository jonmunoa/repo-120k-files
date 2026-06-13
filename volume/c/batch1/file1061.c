// fichero 1061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1061;

Registro1061 crear_registro1061(int id) {
    Registro1061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1061(Registro1061 r) {
    return r.valor + r.id;
}
