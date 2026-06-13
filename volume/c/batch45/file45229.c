// fichero 45229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45229;

Registro45229 crear_registro45229(int id) {
    Registro45229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45229(Registro45229 r) {
    return r.valor + r.id;
}
