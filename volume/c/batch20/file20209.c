// fichero 20209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20209;

Registro20209 crear_registro20209(int id) {
    Registro20209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20209(Registro20209 r) {
    return r.valor + r.id;
}
