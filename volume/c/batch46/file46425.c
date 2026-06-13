// fichero 46425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46425;

Registro46425 crear_registro46425(int id) {
    Registro46425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46425(Registro46425 r) {
    return r.valor + r.id;
}
