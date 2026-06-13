// fichero 42993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42993;

Registro42993 crear_registro42993(int id) {
    Registro42993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42993(Registro42993 r) {
    return r.valor + r.id;
}
