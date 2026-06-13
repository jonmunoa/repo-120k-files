// fichero 7317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7317;

Registro7317 crear_registro7317(int id) {
    Registro7317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7317(Registro7317 r) {
    return r.valor + r.id;
}
