// fichero 1933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1933;

Registro1933 crear_registro1933(int id) {
    Registro1933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1933(Registro1933 r) {
    return r.valor + r.id;
}
