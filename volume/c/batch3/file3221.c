// fichero 3221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3221;

Registro3221 crear_registro3221(int id) {
    Registro3221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3221(Registro3221 r) {
    return r.valor + r.id;
}
