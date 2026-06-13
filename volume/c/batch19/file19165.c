// fichero 19165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19165;

Registro19165 crear_registro19165(int id) {
    Registro19165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19165(Registro19165 r) {
    return r.valor + r.id;
}
