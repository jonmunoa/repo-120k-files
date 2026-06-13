// fichero 7233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7233;

Registro7233 crear_registro7233(int id) {
    Registro7233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7233(Registro7233 r) {
    return r.valor + r.id;
}
