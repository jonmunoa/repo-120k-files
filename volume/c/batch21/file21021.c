// fichero 21021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21021;

Registro21021 crear_registro21021(int id) {
    Registro21021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21021(Registro21021 r) {
    return r.valor + r.id;
}
