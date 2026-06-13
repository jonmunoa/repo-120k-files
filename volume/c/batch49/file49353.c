// fichero 49353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49353;

Registro49353 crear_registro49353(int id) {
    Registro49353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49353(Registro49353 r) {
    return r.valor + r.id;
}
