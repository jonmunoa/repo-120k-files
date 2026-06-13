// fichero 11237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11237;

Registro11237 crear_registro11237(int id) {
    Registro11237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11237(Registro11237 r) {
    return r.valor + r.id;
}
