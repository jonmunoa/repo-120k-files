// fichero 49 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49;

Registro49 crear_registro49(int id) {
    Registro49 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49(Registro49 r) {
    return r.valor + r.id;
}
