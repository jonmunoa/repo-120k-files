// fichero 20185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20185;

Registro20185 crear_registro20185(int id) {
    Registro20185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20185(Registro20185 r) {
    return r.valor + r.id;
}
