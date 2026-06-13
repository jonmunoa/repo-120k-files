// fichero 36185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36185;

Registro36185 crear_registro36185(int id) {
    Registro36185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36185(Registro36185 r) {
    return r.valor + r.id;
}
