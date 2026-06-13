// fichero 1853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1853;

Registro1853 crear_registro1853(int id) {
    Registro1853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1853(Registro1853 r) {
    return r.valor + r.id;
}
