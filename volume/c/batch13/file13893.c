// fichero 13893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13893;

Registro13893 crear_registro13893(int id) {
    Registro13893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13893(Registro13893 r) {
    return r.valor + r.id;
}
