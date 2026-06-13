// fichero 1953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1953;

Registro1953 crear_registro1953(int id) {
    Registro1953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1953(Registro1953 r) {
    return r.valor + r.id;
}
