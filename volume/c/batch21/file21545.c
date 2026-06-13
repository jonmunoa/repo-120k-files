// fichero 21545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21545;

Registro21545 crear_registro21545(int id) {
    Registro21545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21545(Registro21545 r) {
    return r.valor + r.id;
}
