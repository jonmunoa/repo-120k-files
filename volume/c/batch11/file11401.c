// fichero 11401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11401;

Registro11401 crear_registro11401(int id) {
    Registro11401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11401(Registro11401 r) {
    return r.valor + r.id;
}
