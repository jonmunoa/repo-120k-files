// fichero 21709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21709;

Registro21709 crear_registro21709(int id) {
    Registro21709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21709(Registro21709 r) {
    return r.valor + r.id;
}
