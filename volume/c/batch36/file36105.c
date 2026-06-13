// fichero 36105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36105;

Registro36105 crear_registro36105(int id) {
    Registro36105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36105(Registro36105 r) {
    return r.valor + r.id;
}
