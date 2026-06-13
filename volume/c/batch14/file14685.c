// fichero 14685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14685;

Registro14685 crear_registro14685(int id) {
    Registro14685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14685(Registro14685 r) {
    return r.valor + r.id;
}
