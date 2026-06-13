// fichero 20317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20317;

Registro20317 crear_registro20317(int id) {
    Registro20317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20317(Registro20317 r) {
    return r.valor + r.id;
}
