// fichero 11257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11257;

Registro11257 crear_registro11257(int id) {
    Registro11257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11257(Registro11257 r) {
    return r.valor + r.id;
}
