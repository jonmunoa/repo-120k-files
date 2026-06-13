// fichero 28797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28797;

Registro28797 crear_registro28797(int id) {
    Registro28797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28797(Registro28797 r) {
    return r.valor + r.id;
}
