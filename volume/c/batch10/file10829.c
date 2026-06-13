// fichero 10829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10829;

Registro10829 crear_registro10829(int id) {
    Registro10829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10829(Registro10829 r) {
    return r.valor + r.id;
}
