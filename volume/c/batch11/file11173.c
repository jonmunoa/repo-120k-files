// fichero 11173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11173;

Registro11173 crear_registro11173(int id) {
    Registro11173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11173(Registro11173 r) {
    return r.valor + r.id;
}
