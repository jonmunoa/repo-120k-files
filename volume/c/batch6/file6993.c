// fichero 6993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6993;

Registro6993 crear_registro6993(int id) {
    Registro6993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6993(Registro6993 r) {
    return r.valor + r.id;
}
