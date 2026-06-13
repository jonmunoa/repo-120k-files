// fichero 5121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5121;

Registro5121 crear_registro5121(int id) {
    Registro5121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5121(Registro5121 r) {
    return r.valor + r.id;
}
