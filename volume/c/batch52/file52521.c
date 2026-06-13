// fichero 52521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52521;

Registro52521 crear_registro52521(int id) {
    Registro52521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52521(Registro52521 r) {
    return r.valor + r.id;
}
