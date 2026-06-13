// fichero 9297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9297;

Registro9297 crear_registro9297(int id) {
    Registro9297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9297(Registro9297 r) {
    return r.valor + r.id;
}
