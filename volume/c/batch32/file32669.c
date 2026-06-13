// fichero 32669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32669;

Registro32669 crear_registro32669(int id) {
    Registro32669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32669(Registro32669 r) {
    return r.valor + r.id;
}
