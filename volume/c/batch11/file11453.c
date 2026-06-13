// fichero 11453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11453;

Registro11453 crear_registro11453(int id) {
    Registro11453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11453(Registro11453 r) {
    return r.valor + r.id;
}
