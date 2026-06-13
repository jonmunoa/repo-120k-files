// fichero 10501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10501;

Registro10501 crear_registro10501(int id) {
    Registro10501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10501(Registro10501 r) {
    return r.valor + r.id;
}
