// fichero 49129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49129;

Registro49129 crear_registro49129(int id) {
    Registro49129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49129(Registro49129 r) {
    return r.valor + r.id;
}
