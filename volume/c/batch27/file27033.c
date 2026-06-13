// fichero 27033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27033;

Registro27033 crear_registro27033(int id) {
    Registro27033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27033(Registro27033 r) {
    return r.valor + r.id;
}
