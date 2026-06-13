// fichero 7325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7325;

Registro7325 crear_registro7325(int id) {
    Registro7325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7325(Registro7325 r) {
    return r.valor + r.id;
}
