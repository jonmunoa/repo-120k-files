// fichero 20797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20797;

Registro20797 crear_registro20797(int id) {
    Registro20797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20797(Registro20797 r) {
    return r.valor + r.id;
}
