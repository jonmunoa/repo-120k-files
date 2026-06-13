// fichero 11709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11709;

Registro11709 crear_registro11709(int id) {
    Registro11709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11709(Registro11709 r) {
    return r.valor + r.id;
}
