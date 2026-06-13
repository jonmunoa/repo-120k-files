// fichero 17761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17761;

Registro17761 crear_registro17761(int id) {
    Registro17761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17761(Registro17761 r) {
    return r.valor + r.id;
}
