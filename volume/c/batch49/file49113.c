// fichero 49113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49113;

Registro49113 crear_registro49113(int id) {
    Registro49113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49113(Registro49113 r) {
    return r.valor + r.id;
}
