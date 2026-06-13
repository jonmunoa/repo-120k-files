// fichero 46893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46893;

Registro46893 crear_registro46893(int id) {
    Registro46893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46893(Registro46893 r) {
    return r.valor + r.id;
}
