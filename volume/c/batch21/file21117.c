// fichero 21117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21117;

Registro21117 crear_registro21117(int id) {
    Registro21117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21117(Registro21117 r) {
    return r.valor + r.id;
}
