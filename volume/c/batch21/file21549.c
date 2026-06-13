// fichero 21549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21549;

Registro21549 crear_registro21549(int id) {
    Registro21549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21549(Registro21549 r) {
    return r.valor + r.id;
}
