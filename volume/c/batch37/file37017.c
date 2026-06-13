// fichero 37017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37017;

Registro37017 crear_registro37017(int id) {
    Registro37017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37017(Registro37017 r) {
    return r.valor + r.id;
}
