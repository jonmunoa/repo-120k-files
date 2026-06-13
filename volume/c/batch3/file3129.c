// fichero 3129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3129;

Registro3129 crear_registro3129(int id) {
    Registro3129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3129(Registro3129 r) {
    return r.valor + r.id;
}
