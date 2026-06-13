// fichero 21209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21209;

Registro21209 crear_registro21209(int id) {
    Registro21209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21209(Registro21209 r) {
    return r.valor + r.id;
}
