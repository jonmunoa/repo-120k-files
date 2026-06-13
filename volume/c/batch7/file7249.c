// fichero 7249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7249;

Registro7249 crear_registro7249(int id) {
    Registro7249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7249(Registro7249 r) {
    return r.valor + r.id;
}
