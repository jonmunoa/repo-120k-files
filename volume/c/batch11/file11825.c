// fichero 11825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11825;

Registro11825 crear_registro11825(int id) {
    Registro11825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11825(Registro11825 r) {
    return r.valor + r.id;
}
