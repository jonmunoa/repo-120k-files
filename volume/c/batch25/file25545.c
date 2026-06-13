// fichero 25545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25545;

Registro25545 crear_registro25545(int id) {
    Registro25545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25545(Registro25545 r) {
    return r.valor + r.id;
}
