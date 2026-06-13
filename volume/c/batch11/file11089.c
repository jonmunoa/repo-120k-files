// fichero 11089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11089;

Registro11089 crear_registro11089(int id) {
    Registro11089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11089(Registro11089 r) {
    return r.valor + r.id;
}
