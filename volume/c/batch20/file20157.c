// fichero 20157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20157;

Registro20157 crear_registro20157(int id) {
    Registro20157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20157(Registro20157 r) {
    return r.valor + r.id;
}
