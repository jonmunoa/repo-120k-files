// fichero 46917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46917;

Registro46917 crear_registro46917(int id) {
    Registro46917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46917(Registro46917 r) {
    return r.valor + r.id;
}
