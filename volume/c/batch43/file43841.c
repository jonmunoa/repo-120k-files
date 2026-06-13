// fichero 43841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43841;

Registro43841 crear_registro43841(int id) {
    Registro43841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43841(Registro43841 r) {
    return r.valor + r.id;
}
