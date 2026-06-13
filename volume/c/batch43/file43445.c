// fichero 43445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43445;

Registro43445 crear_registro43445(int id) {
    Registro43445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43445(Registro43445 r) {
    return r.valor + r.id;
}
