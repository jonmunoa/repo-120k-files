// fichero 2545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2545;

Registro2545 crear_registro2545(int id) {
    Registro2545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2545(Registro2545 r) {
    return r.valor + r.id;
}
