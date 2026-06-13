// fichero 8013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8013;

Registro8013 crear_registro8013(int id) {
    Registro8013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8013(Registro8013 r) {
    return r.valor + r.id;
}
