// fichero 36873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36873;

Registro36873 crear_registro36873(int id) {
    Registro36873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36873(Registro36873 r) {
    return r.valor + r.id;
}
