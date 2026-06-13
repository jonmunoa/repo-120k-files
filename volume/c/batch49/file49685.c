// fichero 49685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49685;

Registro49685 crear_registro49685(int id) {
    Registro49685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49685(Registro49685 r) {
    return r.valor + r.id;
}
