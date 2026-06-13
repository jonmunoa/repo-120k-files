// fichero 51565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51565;

Registro51565 crear_registro51565(int id) {
    Registro51565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51565(Registro51565 r) {
    return r.valor + r.id;
}
