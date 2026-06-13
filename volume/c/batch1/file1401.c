// fichero 1401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1401;

Registro1401 crear_registro1401(int id) {
    Registro1401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1401(Registro1401 r) {
    return r.valor + r.id;
}
