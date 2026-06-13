// fichero 11705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11705;

Registro11705 crear_registro11705(int id) {
    Registro11705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11705(Registro11705 r) {
    return r.valor + r.id;
}
