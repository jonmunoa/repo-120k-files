// fichero 6901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6901;

Registro6901 crear_registro6901(int id) {
    Registro6901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6901(Registro6901 r) {
    return r.valor + r.id;
}
