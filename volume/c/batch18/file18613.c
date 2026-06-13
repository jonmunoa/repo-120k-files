// fichero 18613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18613;

Registro18613 crear_registro18613(int id) {
    Registro18613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18613(Registro18613 r) {
    return r.valor + r.id;
}
