// fichero 49117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49117;

Registro49117 crear_registro49117(int id) {
    Registro49117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49117(Registro49117 r) {
    return r.valor + r.id;
}
