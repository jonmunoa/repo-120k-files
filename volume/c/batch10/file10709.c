// fichero 10709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10709;

Registro10709 crear_registro10709(int id) {
    Registro10709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10709(Registro10709 r) {
    return r.valor + r.id;
}
