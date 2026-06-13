// fichero 38797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38797;

Registro38797 crear_registro38797(int id) {
    Registro38797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38797(Registro38797 r) {
    return r.valor + r.id;
}
