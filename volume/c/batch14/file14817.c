// fichero 14817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14817;

Registro14817 crear_registro14817(int id) {
    Registro14817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14817(Registro14817 r) {
    return r.valor + r.id;
}
