// fichero 32545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32545;

Registro32545 crear_registro32545(int id) {
    Registro32545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32545(Registro32545 r) {
    return r.valor + r.id;
}
