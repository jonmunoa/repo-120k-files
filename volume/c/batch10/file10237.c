// fichero 10237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10237;

Registro10237 crear_registro10237(int id) {
    Registro10237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10237(Registro10237 r) {
    return r.valor + r.id;
}
