// fichero 11677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11677;

Registro11677 crear_registro11677(int id) {
    Registro11677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11677(Registro11677 r) {
    return r.valor + r.id;
}
