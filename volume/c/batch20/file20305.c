// fichero 20305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20305;

Registro20305 crear_registro20305(int id) {
    Registro20305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20305(Registro20305 r) {
    return r.valor + r.id;
}
