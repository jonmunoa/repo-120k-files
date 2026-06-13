// fichero 52797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52797;

Registro52797 crear_registro52797(int id) {
    Registro52797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52797(Registro52797 r) {
    return r.valor + r.id;
}
