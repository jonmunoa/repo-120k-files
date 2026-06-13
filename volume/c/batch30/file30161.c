// fichero 30161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30161;

Registro30161 crear_registro30161(int id) {
    Registro30161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30161(Registro30161 r) {
    return r.valor + r.id;
}
