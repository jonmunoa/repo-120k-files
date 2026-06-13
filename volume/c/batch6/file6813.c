// fichero 6813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6813;

Registro6813 crear_registro6813(int id) {
    Registro6813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6813(Registro6813 r) {
    return r.valor + r.id;
}
