// fichero 43917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43917;

Registro43917 crear_registro43917(int id) {
    Registro43917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43917(Registro43917 r) {
    return r.valor + r.id;
}
