// fichero 15545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15545;

Registro15545 crear_registro15545(int id) {
    Registro15545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15545(Registro15545 r) {
    return r.valor + r.id;
}
