// fichero 17221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17221;

Registro17221 crear_registro17221(int id) {
    Registro17221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17221(Registro17221 r) {
    return r.valor + r.id;
}
