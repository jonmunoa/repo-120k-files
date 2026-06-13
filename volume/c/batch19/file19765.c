// fichero 19765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19765;

Registro19765 crear_registro19765(int id) {
    Registro19765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19765(Registro19765 r) {
    return r.valor + r.id;
}
