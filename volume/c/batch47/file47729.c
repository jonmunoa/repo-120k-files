// fichero 47729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47729;

Registro47729 crear_registro47729(int id) {
    Registro47729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47729(Registro47729 r) {
    return r.valor + r.id;
}
