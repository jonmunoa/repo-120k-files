// fichero 11521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11521;

Registro11521 crear_registro11521(int id) {
    Registro11521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11521(Registro11521 r) {
    return r.valor + r.id;
}
