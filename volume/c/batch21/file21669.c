// fichero 21669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21669;

Registro21669 crear_registro21669(int id) {
    Registro21669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21669(Registro21669 r) {
    return r.valor + r.id;
}
