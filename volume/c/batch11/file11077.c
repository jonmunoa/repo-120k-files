// fichero 11077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11077;

Registro11077 crear_registro11077(int id) {
    Registro11077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11077(Registro11077 r) {
    return r.valor + r.id;
}
