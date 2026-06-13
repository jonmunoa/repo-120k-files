// fichero 13041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13041;

Registro13041 crear_registro13041(int id) {
    Registro13041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13041(Registro13041 r) {
    return r.valor + r.id;
}
