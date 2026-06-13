// fichero 7269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7269;

Registro7269 crear_registro7269(int id) {
    Registro7269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7269(Registro7269 r) {
    return r.valor + r.id;
}
