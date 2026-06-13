// fichero 32697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32697;

Registro32697 crear_registro32697(int id) {
    Registro32697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32697(Registro32697 r) {
    return r.valor + r.id;
}
