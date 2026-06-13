// fichero 11601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11601;

Registro11601 crear_registro11601(int id) {
    Registro11601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11601(Registro11601 r) {
    return r.valor + r.id;
}
