// fichero 47533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47533;

Registro47533 crear_registro47533(int id) {
    Registro47533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47533(Registro47533 r) {
    return r.valor + r.id;
}
