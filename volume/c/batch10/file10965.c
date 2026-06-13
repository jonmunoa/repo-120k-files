// fichero 10965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10965;

Registro10965 crear_registro10965(int id) {
    Registro10965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10965(Registro10965 r) {
    return r.valor + r.id;
}
