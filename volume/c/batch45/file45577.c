// fichero 45577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45577;

Registro45577 crear_registro45577(int id) {
    Registro45577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45577(Registro45577 r) {
    return r.valor + r.id;
}
