// fichero 5229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5229;

Registro5229 crear_registro5229(int id) {
    Registro5229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5229(Registro5229 r) {
    return r.valor + r.id;
}
