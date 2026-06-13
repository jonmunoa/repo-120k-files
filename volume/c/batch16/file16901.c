// fichero 16901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16901;

Registro16901 crear_registro16901(int id) {
    Registro16901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16901(Registro16901 r) {
    return r.valor + r.id;
}
