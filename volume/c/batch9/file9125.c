// fichero 9125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9125;

Registro9125 crear_registro9125(int id) {
    Registro9125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9125(Registro9125 r) {
    return r.valor + r.id;
}
