// fichero 21845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21845;

Registro21845 crear_registro21845(int id) {
    Registro21845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21845(Registro21845 r) {
    return r.valor + r.id;
}
