// fichero 14397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14397;

Registro14397 crear_registro14397(int id) {
    Registro14397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14397(Registro14397 r) {
    return r.valor + r.id;
}
