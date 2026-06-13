// fichero 14453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14453;

Registro14453 crear_registro14453(int id) {
    Registro14453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14453(Registro14453 r) {
    return r.valor + r.id;
}
