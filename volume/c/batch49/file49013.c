// fichero 49013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49013;

Registro49013 crear_registro49013(int id) {
    Registro49013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49013(Registro49013 r) {
    return r.valor + r.id;
}
