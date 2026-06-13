// fichero 11213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11213;

Registro11213 crear_registro11213(int id) {
    Registro11213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11213(Registro11213 r) {
    return r.valor + r.id;
}
