// fichero 10013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10013;

Registro10013 crear_registro10013(int id) {
    Registro10013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10013(Registro10013 r) {
    return r.valor + r.id;
}
