// fichero 11329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11329;

Registro11329 crear_registro11329(int id) {
    Registro11329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11329(Registro11329 r) {
    return r.valor + r.id;
}
