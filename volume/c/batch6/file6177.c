// fichero 6177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6177;

Registro6177 crear_registro6177(int id) {
    Registro6177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6177(Registro6177 r) {
    return r.valor + r.id;
}
