// fichero 2401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2401;

Registro2401 crear_registro2401(int id) {
    Registro2401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2401(Registro2401 r) {
    return r.valor + r.id;
}
