// fichero 47997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47997;

Registro47997 crear_registro47997(int id) {
    Registro47997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47997(Registro47997 r) {
    return r.valor + r.id;
}
