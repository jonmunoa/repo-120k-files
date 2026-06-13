// fichero 15021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15021;

Registro15021 crear_registro15021(int id) {
    Registro15021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15021(Registro15021 r) {
    return r.valor + r.id;
}
