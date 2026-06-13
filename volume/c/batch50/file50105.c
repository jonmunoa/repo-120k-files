// fichero 50105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50105;

Registro50105 crear_registro50105(int id) {
    Registro50105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50105(Registro50105 r) {
    return r.valor + r.id;
}
