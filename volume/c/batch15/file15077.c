// fichero 15077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15077;

Registro15077 crear_registro15077(int id) {
    Registro15077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15077(Registro15077 r) {
    return r.valor + r.id;
}
