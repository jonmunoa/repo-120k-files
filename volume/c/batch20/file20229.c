// fichero 20229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20229;

Registro20229 crear_registro20229(int id) {
    Registro20229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20229(Registro20229 r) {
    return r.valor + r.id;
}
