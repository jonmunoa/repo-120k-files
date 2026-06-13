// fichero 18801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18801;

Registro18801 crear_registro18801(int id) {
    Registro18801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18801(Registro18801 r) {
    return r.valor + r.id;
}
