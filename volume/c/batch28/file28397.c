// fichero 28397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28397;

Registro28397 crear_registro28397(int id) {
    Registro28397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28397(Registro28397 r) {
    return r.valor + r.id;
}
