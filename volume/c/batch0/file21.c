// fichero 21 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21;

Registro21 crear_registro21(int id) {
    Registro21 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21(Registro21 r) {
    return r.valor + r.id;
}
