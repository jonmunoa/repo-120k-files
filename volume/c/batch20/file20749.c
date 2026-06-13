// fichero 20749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20749;

Registro20749 crear_registro20749(int id) {
    Registro20749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20749(Registro20749 r) {
    return r.valor + r.id;
}
