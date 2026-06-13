// fichero 1917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1917;

Registro1917 crear_registro1917(int id) {
    Registro1917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1917(Registro1917 r) {
    return r.valor + r.id;
}
