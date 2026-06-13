// fichero 15041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15041;

Registro15041 crear_registro15041(int id) {
    Registro15041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15041(Registro15041 r) {
    return r.valor + r.id;
}
