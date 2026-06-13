// fichero 49401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49401;

Registro49401 crear_registro49401(int id) {
    Registro49401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49401(Registro49401 r) {
    return r.valor + r.id;
}
