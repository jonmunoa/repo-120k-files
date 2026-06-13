// fichero 18921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18921;

Registro18921 crear_registro18921(int id) {
    Registro18921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18921(Registro18921 r) {
    return r.valor + r.id;
}
