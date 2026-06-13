// fichero 41453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41453;

Registro41453 crear_registro41453(int id) {
    Registro41453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41453(Registro41453 r) {
    return r.valor + r.id;
}
