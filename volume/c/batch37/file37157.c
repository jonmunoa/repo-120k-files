// fichero 37157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37157;

Registro37157 crear_registro37157(int id) {
    Registro37157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37157(Registro37157 r) {
    return r.valor + r.id;
}
