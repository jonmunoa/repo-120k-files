// fichero 20161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20161;

Registro20161 crear_registro20161(int id) {
    Registro20161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20161(Registro20161 r) {
    return r.valor + r.id;
}
