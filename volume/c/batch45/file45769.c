// fichero 45769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45769;

Registro45769 crear_registro45769(int id) {
    Registro45769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45769(Registro45769 r) {
    return r.valor + r.id;
}
