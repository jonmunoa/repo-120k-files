// fichero 48917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48917;

Registro48917 crear_registro48917(int id) {
    Registro48917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48917(Registro48917 r) {
    return r.valor + r.id;
}
