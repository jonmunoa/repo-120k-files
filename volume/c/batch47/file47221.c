// fichero 47221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47221;

Registro47221 crear_registro47221(int id) {
    Registro47221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47221(Registro47221 r) {
    return r.valor + r.id;
}
