// fichero 18089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18089;

Registro18089 crear_registro18089(int id) {
    Registro18089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18089(Registro18089 r) {
    return r.valor + r.id;
}
