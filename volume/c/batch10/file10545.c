// fichero 10545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10545;

Registro10545 crear_registro10545(int id) {
    Registro10545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10545(Registro10545 r) {
    return r.valor + r.id;
}
