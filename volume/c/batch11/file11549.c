// fichero 11549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11549;

Registro11549 crear_registro11549(int id) {
    Registro11549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11549(Registro11549 r) {
    return r.valor + r.id;
}
