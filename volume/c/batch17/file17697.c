// fichero 17697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17697;

Registro17697 crear_registro17697(int id) {
    Registro17697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17697(Registro17697 r) {
    return r.valor + r.id;
}
