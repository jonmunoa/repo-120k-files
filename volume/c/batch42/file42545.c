// fichero 42545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42545;

Registro42545 crear_registro42545(int id) {
    Registro42545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42545(Registro42545 r) {
    return r.valor + r.id;
}
