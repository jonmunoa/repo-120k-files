// fichero 18305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18305;

Registro18305 crear_registro18305(int id) {
    Registro18305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18305(Registro18305 r) {
    return r.valor + r.id;
}
