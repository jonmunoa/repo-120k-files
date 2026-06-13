// fichero 11261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11261;

Registro11261 crear_registro11261(int id) {
    Registro11261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11261(Registro11261 r) {
    return r.valor + r.id;
}
