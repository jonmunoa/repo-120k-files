// fichero 35165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35165;

Registro35165 crear_registro35165(int id) {
    Registro35165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35165(Registro35165 r) {
    return r.valor + r.id;
}
