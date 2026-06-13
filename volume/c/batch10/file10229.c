// fichero 10229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10229;

Registro10229 crear_registro10229(int id) {
    Registro10229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10229(Registro10229 r) {
    return r.valor + r.id;
}
