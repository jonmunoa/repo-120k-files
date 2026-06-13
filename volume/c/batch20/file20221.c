// fichero 20221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20221;

Registro20221 crear_registro20221(int id) {
    Registro20221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20221(Registro20221 r) {
    return r.valor + r.id;
}
