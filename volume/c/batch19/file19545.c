// fichero 19545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19545;

Registro19545 crear_registro19545(int id) {
    Registro19545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19545(Registro19545 r) {
    return r.valor + r.id;
}
