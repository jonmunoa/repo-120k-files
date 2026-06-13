// fichero 21221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21221;

Registro21221 crear_registro21221(int id) {
    Registro21221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21221(Registro21221 r) {
    return r.valor + r.id;
}
