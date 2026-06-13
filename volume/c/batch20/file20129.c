// fichero 20129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20129;

Registro20129 crear_registro20129(int id) {
    Registro20129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20129(Registro20129 r) {
    return r.valor + r.id;
}
