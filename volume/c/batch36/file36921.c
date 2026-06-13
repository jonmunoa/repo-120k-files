// fichero 36921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36921;

Registro36921 crear_registro36921(int id) {
    Registro36921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36921(Registro36921 r) {
    return r.valor + r.id;
}
