// fichero 43569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43569;

Registro43569 crear_registro43569(int id) {
    Registro43569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43569(Registro43569 r) {
    return r.valor + r.id;
}
