// fichero 12521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12521;

Registro12521 crear_registro12521(int id) {
    Registro12521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12521(Registro12521 r) {
    return r.valor + r.id;
}
