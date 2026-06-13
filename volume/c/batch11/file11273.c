// fichero 11273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11273;

Registro11273 crear_registro11273(int id) {
    Registro11273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11273(Registro11273 r) {
    return r.valor + r.id;
}
