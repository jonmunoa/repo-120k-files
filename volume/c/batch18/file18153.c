// fichero 18153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18153;

Registro18153 crear_registro18153(int id) {
    Registro18153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18153(Registro18153 r) {
    return r.valor + r.id;
}
