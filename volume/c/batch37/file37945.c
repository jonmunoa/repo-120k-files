// fichero 37945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37945;

Registro37945 crear_registro37945(int id) {
    Registro37945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37945(Registro37945 r) {
    return r.valor + r.id;
}
