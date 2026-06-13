// fichero 4873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4873;

Registro4873 crear_registro4873(int id) {
    Registro4873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4873(Registro4873 r) {
    return r.valor + r.id;
}
