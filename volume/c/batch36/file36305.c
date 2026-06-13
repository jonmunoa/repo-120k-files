// fichero 36305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36305;

Registro36305 crear_registro36305(int id) {
    Registro36305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36305(Registro36305 r) {
    return r.valor + r.id;
}
