// fichero 14893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14893;

Registro14893 crear_registro14893(int id) {
    Registro14893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14893(Registro14893 r) {
    return r.valor + r.id;
}
