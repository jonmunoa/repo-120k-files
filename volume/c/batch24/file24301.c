// fichero 24301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24301;

Registro24301 crear_registro24301(int id) {
    Registro24301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24301(Registro24301 r) {
    return r.valor + r.id;
}
