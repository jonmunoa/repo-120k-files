// fichero 10109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10109;

Registro10109 crear_registro10109(int id) {
    Registro10109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10109(Registro10109 r) {
    return r.valor + r.id;
}
