// fichero 20225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20225;

Registro20225 crear_registro20225(int id) {
    Registro20225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20225(Registro20225 r) {
    return r.valor + r.id;
}
