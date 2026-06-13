// fichero 49157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49157;

Registro49157 crear_registro49157(int id) {
    Registro49157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49157(Registro49157 r) {
    return r.valor + r.id;
}
