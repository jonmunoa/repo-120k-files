// fichero 50821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50821;

Registro50821 crear_registro50821(int id) {
    Registro50821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50821(Registro50821 r) {
    return r.valor + r.id;
}
