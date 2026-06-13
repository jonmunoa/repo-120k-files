// fichero 3301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3301;

Registro3301 crear_registro3301(int id) {
    Registro3301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3301(Registro3301 r) {
    return r.valor + r.id;
}
