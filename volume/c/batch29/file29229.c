// fichero 29229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29229;

Registro29229 crear_registro29229(int id) {
    Registro29229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29229(Registro29229 r) {
    return r.valor + r.id;
}
