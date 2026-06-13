// fichero 34185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34185;

Registro34185 crear_registro34185(int id) {
    Registro34185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34185(Registro34185 r) {
    return r.valor + r.id;
}
