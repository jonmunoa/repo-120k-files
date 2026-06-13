// fichero 13901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13901;

Registro13901 crear_registro13901(int id) {
    Registro13901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13901(Registro13901 r) {
    return r.valor + r.id;
}
