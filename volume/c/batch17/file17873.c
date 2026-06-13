// fichero 17873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17873;

Registro17873 crear_registro17873(int id) {
    Registro17873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17873(Registro17873 r) {
    return r.valor + r.id;
}
