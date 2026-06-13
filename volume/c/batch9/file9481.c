// fichero 9481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9481;

Registro9481 crear_registro9481(int id) {
    Registro9481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9481(Registro9481 r) {
    return r.valor + r.id;
}
