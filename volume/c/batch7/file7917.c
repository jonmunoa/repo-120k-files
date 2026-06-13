// fichero 7917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7917;

Registro7917 crear_registro7917(int id) {
    Registro7917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7917(Registro7917 r) {
    return r.valor + r.id;
}
