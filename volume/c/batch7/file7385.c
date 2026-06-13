// fichero 7385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7385;

Registro7385 crear_registro7385(int id) {
    Registro7385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7385(Registro7385 r) {
    return r.valor + r.id;
}
