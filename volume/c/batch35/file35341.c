// fichero 35341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35341;

Registro35341 crear_registro35341(int id) {
    Registro35341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35341(Registro35341 r) {
    return r.valor + r.id;
}
