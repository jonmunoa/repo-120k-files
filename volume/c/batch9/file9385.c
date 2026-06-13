// fichero 9385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9385;

Registro9385 crear_registro9385(int id) {
    Registro9385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9385(Registro9385 r) {
    return r.valor + r.id;
}
