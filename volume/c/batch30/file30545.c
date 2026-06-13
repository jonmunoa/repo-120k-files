// fichero 30545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30545;

Registro30545 crear_registro30545(int id) {
    Registro30545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30545(Registro30545 r) {
    return r.valor + r.id;
}
