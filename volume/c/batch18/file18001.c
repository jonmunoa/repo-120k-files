// fichero 18001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18001;

Registro18001 crear_registro18001(int id) {
    Registro18001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18001(Registro18001 r) {
    return r.valor + r.id;
}
