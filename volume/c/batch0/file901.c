// fichero 901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro901;

Registro901 crear_registro901(int id) {
    Registro901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro901(Registro901 r) {
    return r.valor + r.id;
}
