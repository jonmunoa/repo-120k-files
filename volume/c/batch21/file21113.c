// fichero 21113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21113;

Registro21113 crear_registro21113(int id) {
    Registro21113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21113(Registro21113 r) {
    return r.valor + r.id;
}
