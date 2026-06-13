// fichero 15873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15873;

Registro15873 crear_registro15873(int id) {
    Registro15873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15873(Registro15873 r) {
    return r.valor + r.id;
}
