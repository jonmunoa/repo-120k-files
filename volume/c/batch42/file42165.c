// fichero 42165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42165;

Registro42165 crear_registro42165(int id) {
    Registro42165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42165(Registro42165 r) {
    return r.valor + r.id;
}
