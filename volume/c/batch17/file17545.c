// fichero 17545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17545;

Registro17545 crear_registro17545(int id) {
    Registro17545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17545(Registro17545 r) {
    return r.valor + r.id;
}
