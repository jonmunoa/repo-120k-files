// fichero 24057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24057;

Registro24057 crear_registro24057(int id) {
    Registro24057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24057(Registro24057 r) {
    return r.valor + r.id;
}
