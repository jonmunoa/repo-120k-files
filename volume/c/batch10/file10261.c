// fichero 10261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10261;

Registro10261 crear_registro10261(int id) {
    Registro10261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10261(Registro10261 r) {
    return r.valor + r.id;
}
