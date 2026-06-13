// fichero 18157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18157;

Registro18157 crear_registro18157(int id) {
    Registro18157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18157(Registro18157 r) {
    return r.valor + r.id;
}
