// fichero 38045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38045;

Registro38045 crear_registro38045(int id) {
    Registro38045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38045(Registro38045 r) {
    return r.valor + r.id;
}
