// fichero 45121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45121;

Registro45121 crear_registro45121(int id) {
    Registro45121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45121(Registro45121 r) {
    return r.valor + r.id;
}
