// fichero 3185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3185;

Registro3185 crear_registro3185(int id) {
    Registro3185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3185(Registro3185 r) {
    return r.valor + r.id;
}
