// fichero 18677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18677;

Registro18677 crear_registro18677(int id) {
    Registro18677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18677(Registro18677 r) {
    return r.valor + r.id;
}
