// fichero 11965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11965;

Registro11965 crear_registro11965(int id) {
    Registro11965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11965(Registro11965 r) {
    return r.valor + r.id;
}
