// fichero 1821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1821;

Registro1821 crear_registro1821(int id) {
    Registro1821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1821(Registro1821 r) {
    return r.valor + r.id;
}
