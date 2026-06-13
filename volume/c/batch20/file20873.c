// fichero 20873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20873;

Registro20873 crear_registro20873(int id) {
    Registro20873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20873(Registro20873 r) {
    return r.valor + r.id;
}
