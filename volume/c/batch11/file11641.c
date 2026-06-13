// fichero 11641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11641;

Registro11641 crear_registro11641(int id) {
    Registro11641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11641(Registro11641 r) {
    return r.valor + r.id;
}
