// fichero 11769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11769;

Registro11769 crear_registro11769(int id) {
    Registro11769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11769(Registro11769 r) {
    return r.valor + r.id;
}
