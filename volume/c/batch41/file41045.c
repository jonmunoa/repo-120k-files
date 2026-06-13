// fichero 41045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41045;

Registro41045 crear_registro41045(int id) {
    Registro41045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41045(Registro41045 r) {
    return r.valor + r.id;
}
