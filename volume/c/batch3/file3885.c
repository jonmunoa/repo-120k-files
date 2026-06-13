// fichero 3885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3885;

Registro3885 crear_registro3885(int id) {
    Registro3885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3885(Registro3885 r) {
    return r.valor + r.id;
}
