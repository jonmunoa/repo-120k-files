// fichero 17957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17957;

Registro17957 crear_registro17957(int id) {
    Registro17957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17957(Registro17957 r) {
    return r.valor + r.id;
}
