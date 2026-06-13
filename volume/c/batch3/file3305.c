// fichero 3305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3305;

Registro3305 crear_registro3305(int id) {
    Registro3305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3305(Registro3305 r) {
    return r.valor + r.id;
}
