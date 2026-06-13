// fichero 1069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1069;

Registro1069 crear_registro1069(int id) {
    Registro1069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1069(Registro1069 r) {
    return r.valor + r.id;
}
