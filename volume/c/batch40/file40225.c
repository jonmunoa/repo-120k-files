// fichero 40225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40225;

Registro40225 crear_registro40225(int id) {
    Registro40225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40225(Registro40225 r) {
    return r.valor + r.id;
}
