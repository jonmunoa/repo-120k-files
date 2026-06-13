// fichero 20113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20113;

Registro20113 crear_registro20113(int id) {
    Registro20113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20113(Registro20113 r) {
    return r.valor + r.id;
}
