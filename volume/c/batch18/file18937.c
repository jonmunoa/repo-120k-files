// fichero 18937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18937;

Registro18937 crear_registro18937(int id) {
    Registro18937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18937(Registro18937 r) {
    return r.valor + r.id;
}
