// fichero 445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro445;

Registro445 crear_registro445(int id) {
    Registro445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro445(Registro445 r) {
    return r.valor + r.id;
}
