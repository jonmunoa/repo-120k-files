// fichero 49917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49917;

Registro49917 crear_registro49917(int id) {
    Registro49917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49917(Registro49917 r) {
    return r.valor + r.id;
}
