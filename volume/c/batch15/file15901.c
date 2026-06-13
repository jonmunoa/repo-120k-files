// fichero 15901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15901;

Registro15901 crear_registro15901(int id) {
    Registro15901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15901(Registro15901 r) {
    return r.valor + r.id;
}
