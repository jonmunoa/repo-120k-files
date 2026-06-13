// fichero 48901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48901;

Registro48901 crear_registro48901(int id) {
    Registro48901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48901(Registro48901 r) {
    return r.valor + r.id;
}
