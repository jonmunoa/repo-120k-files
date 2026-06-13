// fichero 37177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37177;

Registro37177 crear_registro37177(int id) {
    Registro37177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37177(Registro37177 r) {
    return r.valor + r.id;
}
