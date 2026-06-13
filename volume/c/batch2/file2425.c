// fichero 2425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2425;

Registro2425 crear_registro2425(int id) {
    Registro2425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2425(Registro2425 r) {
    return r.valor + r.id;
}
