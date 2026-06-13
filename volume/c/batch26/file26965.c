// fichero 26965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26965;

Registro26965 crear_registro26965(int id) {
    Registro26965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26965(Registro26965 r) {
    return r.valor + r.id;
}
