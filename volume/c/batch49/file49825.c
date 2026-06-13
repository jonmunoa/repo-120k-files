// fichero 49825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49825;

Registro49825 crear_registro49825(int id) {
    Registro49825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49825(Registro49825 r) {
    return r.valor + r.id;
}
