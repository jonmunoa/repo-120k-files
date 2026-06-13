// fichero 18185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18185;

Registro18185 crear_registro18185(int id) {
    Registro18185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18185(Registro18185 r) {
    return r.valor + r.id;
}
