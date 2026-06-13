// fichero 3969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3969;

Registro3969 crear_registro3969(int id) {
    Registro3969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3969(Registro3969 r) {
    return r.valor + r.id;
}
