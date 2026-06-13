// fichero 11225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11225;

Registro11225 crear_registro11225(int id) {
    Registro11225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11225(Registro11225 r) {
    return r.valor + r.id;
}
