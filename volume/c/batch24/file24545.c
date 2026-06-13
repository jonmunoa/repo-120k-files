// fichero 24545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24545;

Registro24545 crear_registro24545(int id) {
    Registro24545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24545(Registro24545 r) {
    return r.valor + r.id;
}
