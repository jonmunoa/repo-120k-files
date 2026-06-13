// fichero 11069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11069;

Registro11069 crear_registro11069(int id) {
    Registro11069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11069(Registro11069 r) {
    return r.valor + r.id;
}
