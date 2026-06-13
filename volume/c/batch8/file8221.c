// fichero 8221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8221;

Registro8221 crear_registro8221(int id) {
    Registro8221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8221(Registro8221 r) {
    return r.valor + r.id;
}
