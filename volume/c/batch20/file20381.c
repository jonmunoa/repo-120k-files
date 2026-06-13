// fichero 20381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20381;

Registro20381 crear_registro20381(int id) {
    Registro20381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20381(Registro20381 r) {
    return r.valor + r.id;
}
