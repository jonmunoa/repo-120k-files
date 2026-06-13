// fichero 3545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3545;

Registro3545 crear_registro3545(int id) {
    Registro3545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3545(Registro3545 r) {
    return r.valor + r.id;
}
