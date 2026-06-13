// fichero 12885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12885;

Registro12885 crear_registro12885(int id) {
    Registro12885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12885(Registro12885 r) {
    return r.valor + r.id;
}
