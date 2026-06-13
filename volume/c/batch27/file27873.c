// fichero 27873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27873;

Registro27873 crear_registro27873(int id) {
    Registro27873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27873(Registro27873 r) {
    return r.valor + r.id;
}
