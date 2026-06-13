// fichero 11813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11813;

Registro11813 crear_registro11813(int id) {
    Registro11813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11813(Registro11813 r) {
    return r.valor + r.id;
}
