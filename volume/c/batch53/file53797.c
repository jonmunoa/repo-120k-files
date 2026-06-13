// fichero 53797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53797;

Registro53797 crear_registro53797(int id) {
    Registro53797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53797(Registro53797 r) {
    return r.valor + r.id;
}
