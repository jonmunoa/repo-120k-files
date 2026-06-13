// fichero 30853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30853;

Registro30853 crear_registro30853(int id) {
    Registro30853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30853(Registro30853 r) {
    return r.valor + r.id;
}
