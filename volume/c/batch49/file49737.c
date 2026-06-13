// fichero 49737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49737;

Registro49737 crear_registro49737(int id) {
    Registro49737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49737(Registro49737 r) {
    return r.valor + r.id;
}
