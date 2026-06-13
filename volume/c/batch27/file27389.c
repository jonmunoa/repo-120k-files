// fichero 27389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27389;

Registro27389 crear_registro27389(int id) {
    Registro27389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27389(Registro27389 r) {
    return r.valor + r.id;
}
