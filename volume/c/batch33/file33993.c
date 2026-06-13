// fichero 33993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33993;

Registro33993 crear_registro33993(int id) {
    Registro33993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33993(Registro33993 r) {
    return r.valor + r.id;
}
