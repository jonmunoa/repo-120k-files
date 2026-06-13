// fichero 11493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11493;

Registro11493 crear_registro11493(int id) {
    Registro11493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11493(Registro11493 r) {
    return r.valor + r.id;
}
