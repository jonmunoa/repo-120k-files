// fichero 26393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26393;

Registro26393 crear_registro26393(int id) {
    Registro26393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26393(Registro26393 r) {
    return r.valor + r.id;
}
