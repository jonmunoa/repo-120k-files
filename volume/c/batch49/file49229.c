// fichero 49229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49229;

Registro49229 crear_registro49229(int id) {
    Registro49229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49229(Registro49229 r) {
    return r.valor + r.id;
}
