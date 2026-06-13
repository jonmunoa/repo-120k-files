// fichero 11797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11797;

Registro11797 crear_registro11797(int id) {
    Registro11797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11797(Registro11797 r) {
    return r.valor + r.id;
}
