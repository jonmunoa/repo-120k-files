// fichero 49485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49485;

Registro49485 crear_registro49485(int id) {
    Registro49485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49485(Registro49485 r) {
    return r.valor + r.id;
}
