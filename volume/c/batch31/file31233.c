// fichero 31233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31233;

Registro31233 crear_registro31233(int id) {
    Registro31233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31233(Registro31233 r) {
    return r.valor + r.id;
}
