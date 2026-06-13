// fichero 52221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52221;

Registro52221 crear_registro52221(int id) {
    Registro52221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52221(Registro52221 r) {
    return r.valor + r.id;
}
