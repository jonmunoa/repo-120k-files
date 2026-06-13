// fichero 197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro197;

Registro197 crear_registro197(int id) {
    Registro197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro197(Registro197 r) {
    return r.valor + r.id;
}
