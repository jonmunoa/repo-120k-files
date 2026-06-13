// fichero 11505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11505;

Registro11505 crear_registro11505(int id) {
    Registro11505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11505(Registro11505 r) {
    return r.valor + r.id;
}
