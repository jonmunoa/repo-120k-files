// fichero 1929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1929;

Registro1929 crear_registro1929(int id) {
    Registro1929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1929(Registro1929 r) {
    return r.valor + r.id;
}
