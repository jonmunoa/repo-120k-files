// fichero 7265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7265;

Registro7265 crear_registro7265(int id) {
    Registro7265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7265(Registro7265 r) {
    return r.valor + r.id;
}
