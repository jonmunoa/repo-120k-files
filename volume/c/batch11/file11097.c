// fichero 11097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11097;

Registro11097 crear_registro11097(int id) {
    Registro11097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11097(Registro11097 r) {
    return r.valor + r.id;
}
