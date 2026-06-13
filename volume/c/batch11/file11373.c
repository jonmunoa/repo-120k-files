// fichero 11373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11373;

Registro11373 crear_registro11373(int id) {
    Registro11373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11373(Registro11373 r) {
    return r.valor + r.id;
}
