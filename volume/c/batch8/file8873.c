// fichero 8873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8873;

Registro8873 crear_registro8873(int id) {
    Registro8873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8873(Registro8873 r) {
    return r.valor + r.id;
}
