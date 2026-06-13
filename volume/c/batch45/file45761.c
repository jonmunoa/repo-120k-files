// fichero 45761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45761;

Registro45761 crear_registro45761(int id) {
    Registro45761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45761(Registro45761 r) {
    return r.valor + r.id;
}
