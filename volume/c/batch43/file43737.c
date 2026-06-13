// fichero 43737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43737;

Registro43737 crear_registro43737(int id) {
    Registro43737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43737(Registro43737 r) {
    return r.valor + r.id;
}
