// fichero 29185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29185;

Registro29185 crear_registro29185(int id) {
    Registro29185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29185(Registro29185 r) {
    return r.valor + r.id;
}
