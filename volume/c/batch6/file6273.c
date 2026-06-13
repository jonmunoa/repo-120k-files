// fichero 6273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6273;

Registro6273 crear_registro6273(int id) {
    Registro6273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6273(Registro6273 r) {
    return r.valor + r.id;
}
