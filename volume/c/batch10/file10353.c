// fichero 10353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10353;

Registro10353 crear_registro10353(int id) {
    Registro10353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10353(Registro10353 r) {
    return r.valor + r.id;
}
