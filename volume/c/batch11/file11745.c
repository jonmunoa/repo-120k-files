// fichero 11745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11745;

Registro11745 crear_registro11745(int id) {
    Registro11745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11745(Registro11745 r) {
    return r.valor + r.id;
}
