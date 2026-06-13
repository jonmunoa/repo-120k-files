// fichero 41081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41081;

Registro41081 crear_registro41081(int id) {
    Registro41081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41081(Registro41081 r) {
    return r.valor + r.id;
}
