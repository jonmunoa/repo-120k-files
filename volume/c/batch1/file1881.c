// fichero 1881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1881;

Registro1881 crear_registro1881(int id) {
    Registro1881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1881(Registro1881 r) {
    return r.valor + r.id;
}
