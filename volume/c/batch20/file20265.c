// fichero 20265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20265;

Registro20265 crear_registro20265(int id) {
    Registro20265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20265(Registro20265 r) {
    return r.valor + r.id;
}
