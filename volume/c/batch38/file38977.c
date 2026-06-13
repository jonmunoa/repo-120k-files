// fichero 38977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38977;

Registro38977 crear_registro38977(int id) {
    Registro38977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38977(Registro38977 r) {
    return r.valor + r.id;
}
