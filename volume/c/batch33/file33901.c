// fichero 33901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33901;

Registro33901 crear_registro33901(int id) {
    Registro33901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33901(Registro33901 r) {
    return r.valor + r.id;
}
