// fichero 33697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33697;

Registro33697 crear_registro33697(int id) {
    Registro33697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33697(Registro33697 r) {
    return r.valor + r.id;
}
