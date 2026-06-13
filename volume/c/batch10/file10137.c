// fichero 10137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10137;

Registro10137 crear_registro10137(int id) {
    Registro10137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10137(Registro10137 r) {
    return r.valor + r.id;
}
