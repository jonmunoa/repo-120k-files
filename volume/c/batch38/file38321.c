// fichero 38321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38321;

Registro38321 crear_registro38321(int id) {
    Registro38321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38321(Registro38321 r) {
    return r.valor + r.id;
}
