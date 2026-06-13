// fichero 29693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29693;

Registro29693 crear_registro29693(int id) {
    Registro29693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29693(Registro29693 r) {
    return r.valor + r.id;
}
