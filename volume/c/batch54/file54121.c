// fichero 54121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54121;

Registro54121 crear_registro54121(int id) {
    Registro54121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54121(Registro54121 r) {
    return r.valor + r.id;
}
