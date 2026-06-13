// fichero 18477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18477;

Registro18477 crear_registro18477(int id) {
    Registro18477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18477(Registro18477 r) {
    return r.valor + r.id;
}
