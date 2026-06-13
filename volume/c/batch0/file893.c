// fichero 893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro893;

Registro893 crear_registro893(int id) {
    Registro893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro893(Registro893 r) {
    return r.valor + r.id;
}
