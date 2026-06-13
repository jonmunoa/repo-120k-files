// fichero 11025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11025;

Registro11025 crear_registro11025(int id) {
    Registro11025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11025(Registro11025 r) {
    return r.valor + r.id;
}
